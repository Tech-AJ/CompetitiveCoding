//http://ide.geeksforgeeks.org/SjG4kX
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string inp;     
    getline(cin,inp);
    vector<string> out;   //Array of  output string
    out.push_back("");
    bool caps=0;    //Caps lock flag initially in off mode
    int curi=0,curj=0;   //Cursor position variable ( curi = x-direction cursor, curj = y-direction cursor)
    for(int i=0;i<inp.length();i++)
    {
       /* If current input character is alphanumeric character or space character then store it at cursor
        position and shift cursor by one. ( Before storing, check for caps lock) */
       if((inp[i]>='a' && inp[i]<='z')||(inp[i]>='A' && inp[i]<='Z') || (inp[i]>='0' && inp[i]<='9')||inp[i]==' ')
       {
           char t;
           if(caps && (inp[i]>='a' && inp[i]<='z')) t=inp[i]-'a'+'A';
           else t=inp[i];
           if(curj==out[curi].length()) out[curi].push_back(t);  // if position to insert is at end directly push
           else out[curi].insert(out[curi].begin()+curj,t);      // else insert at correct position
           curj++;
       }
       /* If current input character is '#', then insert a new line character at current cursor
           position and if there are some character right to the cursor in a row, then move them 
           to new line. Update the cursor position.*/ 
       else if(inp[i]=='#')
       {
               curi++;
               out.insert(out.begin()+curi,out[curi-1].substr(curj));
               out[curi-1]=out[curi-1].substr(0,curj);
               curj=0;
       }
       // If current input character is '@', then invert the caps lock flag.
       else if(inp[i]=='@')
           caps=(caps+1)%2;
       /* If current character is '<', then shift the current cursor to one step left (if available). If cursor is at the              starting of the row, it moves to end of the row above (if available)*/
       else if(inp[i]=='<')
       {
           if(curi==0 && curj==0) continue;
           if(curj>0) { curj--; continue;}
           curi--;
           curj=out[curi].length();
       }
      /*  If current character is '>', then shift the current cursor  to one step right (if available). If cursor is at a              row end it moves to starting of the row below (if available). */
        else if(inp[i]=='>')
        {
            if(curi==out.size()-1 && curj==out[curi].length()) continue;
            if(curj<out[curi].length()) curj++;
            else if(curi<out.size()-1) curi++,curj=0;
        }
      /* If current character is '/', then deletes one character from the left of the cursor and move cursor one               step left. It follows same direction rules as LEFT arrow key (<). */
        else if(inp[i]=='/')
        {
            if(curi==0 && curj==0) continue;
            if(curj>0) { out[curi].erase(out[curi].begin()+curj-1),curj--; continue;}
            string t=out[curi];
            out.erase(out.begin()+curi);
            curi--;
            curj=out[curi].length();
            out[curi]+=t;
        }
        else if(inp[i]=='^')
        {
            if(curi==0){ while(inp[i]=='^') i++; 
                          i--; continue;}
            while(inp[i]=='^' && curi>0) curi--,i++;
            while(inp[i]=='^') i++;
            if(curj>out[curi].length()) curj=out[curi].length();
          //  if(out[curi].length()==0) curj=0;  //??
            i--;
        }
        else if(inp[i]=='?')
        {
            if(curi==out.size()-1) { while(inp[i]=='?') i++; i--; continue;}
            while(inp[i]=='?' && curi<out.size()-1) curi++,i++;
            while(inp[i]=='?') i++;
           
            if(curj>out[curi].length()) curj=out[curi].length();
            //if(out[curi].length()==0) curj=0;    //??
        
            i--;
           
        }
    }
     
    for(int i=0;i<out.size();i++) cout<<out[i]<<endl;
   
    return 0;
    
}
