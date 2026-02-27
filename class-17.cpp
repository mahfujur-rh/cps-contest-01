/*🎯 Discussed Topics:

Input/Output

Input with spaces

Visual Representation

Digit Sum using string

Even odd check for big numbers
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    char name[10];
    cin>>name;
	cout<<name;
  cout<<strlen(name);
}
//lower to uper char
#include <bits/stdc++.h>
using namespace std;

int main() {
   char name[20];
   cin>>name;
   int len=strlen(name);
   for(int i=0;i<len;i++){
       name[i]-=32;
   }
   cout<<name;

}

#include <bits/stdc++.h>
using namespace std;

int main() {
   char name[20];
   cin>>name;
   int len=strlen(name);
   for(int i=0;i<len;i++){
       if(name[i]>='a'&&name[i]<='z'){
            name[i]-=32;
       }
      
   }
   cout<<name;

}

