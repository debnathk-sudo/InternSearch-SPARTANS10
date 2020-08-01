#include <iostream>
#include <string>
#include <map>
#include<bits/stdc++.h>
using namespace std;

int find(string sub,char c) //returns 1 if new char found in old substring
{
  int i=0;
  while(sub[i])
  {
    if(sub[i]==c)
      return 1;
    i++;
  }
  return 0;
}

int longestSubString(string text)
{
    string sub; sub+=text[0];
    int max=0;

    cout<<"SubString: "<<sub<<", new char: "<<text[0]<<endl;
    cout<<"Sub.length(): "<<sub.length()<<" Max: "<<max<<endl<<endl;


    for(int i=1;i<text.length();i++)
    {
      if(find(sub,text[i])==0) //to find out if the new char is unique or not.
        {
          sub+=text[i];
          if((sub.length()) > max) //update max
            max=sub.length();
        }
      else
        {
          sub=""; //if new char is already present, then reset sub string
          sub+=text[i];
        }
      cout<<"SubString: "<<sub<<", new char: "<<text[i]<<endl;
      cout<<"Sub.length(): "<<sub.length()<<" Max: "<<max<<endl<<endl;
    }
    return max;
}

int main()
{
  string text;
  //getline(cin, text);
  text="abdefgabefdqwx";
  cout<<longestSubString(text)<<" is the length of the longest sub-string without repeatation.";
  return 0;
}
