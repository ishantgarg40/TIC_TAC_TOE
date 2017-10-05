#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
void display(char a[3][3]){
int i,j;
for(i=0;i<3;++i){
for(j=0;j<3;++j){
if(j==2){
cout<<a[i][j]<<'\n'<<'\n';
}
else{
cout<<a[i][j]<<'\t';
}
}
cout<<'\n';
}
}

int main()
{
cout<<"WELCOME TO TICTACTOE"<<'\n'<<"USE ONLY 'X' AND 'O' CHARACTERS...."<<'\n';
cout<<"Player 1 takes X"<<'\n';
cout<<"Player 2 takes O"<<'\n';
char a[3][3] =
{
  {'7','8','9'},
  {'4','5','6'},
  {'1','2','3'}
              };
int cell,i,j,player=0;
while(1<2)
{
system("clear");
display(a);
if((a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')||(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')||(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')||(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')||(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')||(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')||(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X'))
{
cout<<"Player 1 Wins...."<<'\n';
break;
}
else if((a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')||(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')||(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')||(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')||(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')||(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')||(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O'))
{
cout<<"Player 2 Wins...."<<'\n';
break;
}
else if(player==9){cout<<"Match Draw";
               break;}
cin>>cell;
  switch(cell){
    case 7:
    if(player%2==0){
      a[0][0]='X';
    }
     else {a[0][0]='O';}
         break;

    case 8:
    if(player%2==0){
      a[0][1]='X';
    }
     else {a[0][1]='O';}
         break;

    case 9:
    if(player%2==0){
      a[0][2]='X';
    }
     else {a[0][2]='O';}
         break;

     case 4:
     if(player%2==0){
       a[1][0]='X';
     }
      else {a[1][0]='O';}
          break;

      case 5:
      if(player%2==0){
        a[1][1]='X';
      }
       else {a[1][1]='O';}
           break;

       case 6:
       if(player%2==0){
         a[1][2]='X';
       }
        else {a[1][2]='O';}
            break;

        case 1:
        if(player%2==0){
          a[2][0]='X';
        }
         else {a[2][0]='O';}
             break;

        case 2:
        if(player%2==0){
          a[2][1]='X';
        }
         else {a[2][1]='O';}
             break;

          case 3:
          if(player%2==0){
            a[2][2]='X';
          }
           else {a[2][2]='O';}
               break;
default:
    cout<<"Move not known!!";
    break;


         }
++player;
    }
return 0;
}
