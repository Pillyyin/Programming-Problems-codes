//  Runtume 16ms(80.92%), Memory 19.96MB(61.18%)

//  'S': player, 'B': box, 'T': target, '.': floor, '#': wall
class Solution {
public:

    int m, n ;
    int dir_r[4] = {-1, 1, 0, 0} ;
    int dir_c[4] = {0, 0, -1, 1} ;

    //  determine whether a person can reach to the back to push the box
    bool ReachBehind(int tr, int tc, int pr, int pc, int br, int bc, vector<vector<char>>& grid){
        bool visited[20][20] = {} ;
        queue<pair<int, int>> q ;

        visited[pr][pc] = true ;
        q.push({pr, pc}) ;
        
        while(!q.empty()){
            int r = q.front().first ;
            int c = q.front().second ;
            q.pop() ;

            if(r == tr && c == tc) return true ;

            //  check around
            for(int i=0;i<4;i++){
                int near_r = r + dir_r[i] ;
                int near_c = c + dir_c[i] ;

                if(near_r < 0 || near_r >= m || near_c < 0 || near_c >= n) continue ;   //  out of bounds 
                if(grid[near_r][near_c] == '#') continue ;   //  wall
                if(near_r == br && near_c == bc) continue ;
                if(visited[near_r][near_c]) continue ;

                visited[near_r][near_c] = true ;
                q.push({near_r, near_c}) ;
            }

        }

        return false ;
    }

    struct State{
        int br, bc ;    //  box
        int pr, pc ;    //  person
        int pushes ;
    } ;

    //  determine how many times to push to target 
    int Countpushes(State start, int tr, int tc, vector<vector<char>>& grid){
        bool visited[20][20][20][20] = {} ; //  save box and person's position
        queue<State> q ;
        
        start.pushes = 0 ;
        visited[start.br][start.bc][start.pr][start.pc] = true ;
        q.push(start) ;
        
        while(!q.empty()){
            State cur = q.front() ;
            q.pop() ;

            if(cur.br == tr && cur.bc == tc) return cur.pushes ;

            for(int i=0;i<4;i++){
                int front_r = cur.br + dir_r[i] ;
                int front_c = cur.bc + dir_c[i] ;
                int back_r = cur.br - dir_r[i] ;
                int back_c = cur.bc - dir_c[i] ;

                if(front_r < 0 || front_r >= m || front_c < 0 || front_c >= n) continue ;
                if(grid[front_r][front_c] == '#') continue ;
                if(back_r < 0 || back_r >= m || back_c < 0 || back_c >= n) continue ;
                if(grid[back_r][back_c] == '#') continue ;
                if(ReachBehind(back_r, back_c, cur.pr, cur.pc, cur.br,cur.bc, grid) == false) continue ;  // person can't reach

                State next ;
                next.br = front_r ;
                next.bc = front_c ;
                next.pr = cur.br ;
                next.pc = cur.bc ;
                next.pushes = cur.pushes + 1 ;

                if(visited[next.br][next.bc][next.pr][next.pc]) continue ;
                visited[next.br][next.bc][next.pr][next.pc] = true ;
                q.push(next) ;

            }

        }

        return -1 ;
        
    }

    int minPushBox(vector<vector<char>>& grid) {
        
        m = grid.size() ;
        n = grid[0].size() ;

        int target_r, target_c, start_r, start_c, box_r, box_c ;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 'T'){
                    target_r = i ;
                    target_c = j ;
                    grid[i][j] = '.' ;
                }else if(grid[i][j] == 'B'){
                    box_r = i ;
                    box_c = j ;
                    grid[i][j] = '.' ;
                }else if(grid[i][j] == 'S'){
                    start_r = i ;
                    start_c = j ;
                    grid[i][j] = '.' ;
                }
            }
        }

        State start ;
        start.br = box_r ;
        start.bc = box_c ;
        start.pr = start_r ;
        start.pc = start_c ;

        return Countpushes(start, target_r, target_c, grid) ;
        
    }
};