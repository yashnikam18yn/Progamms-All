#include<stdio.h>
  
  int anagram(char str1[],char str2[])
  {
      int f1[26]={0};
      int s2[26]={0};
      int i=0;

      while(str1[i]!='\0')
      {
          f1[str1[i]-'a']++;
          i++;
      }
  i=0;
      while(str2[i]!='\0')
      {
          s2[str2[i]-'a']++;
          i++;
      }
      for(i=0;i<26;i++)
      {
          if(f1[i]!=s2[i])
          {
              return 0;
          }
      }
      return 1;
  }
 int main()
 {
     char str1[50];
     char str2[50];
     int flag;

     printf("ENTER FRIST STRING:");
     gets(str1);

     printf("ENTER SECOUND STRING :");
     gets(str2);

     flag=anagram(str1,str2);

     if(flag==1)
     {
         printf("STRING ARE ANAGRAM");
     }else
     printf("STRING ARE NOT ANAGRAM");

     return 0;
 }