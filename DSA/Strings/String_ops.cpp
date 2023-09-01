#include<iostream>

using namespace std;

// Username Validating function
int Validate(char *s){
    for(int i=0;s[i]!='\0';i++){
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    char S[]="DatTebAyo";
    // Finding Length of String
    int i;
    for(i=0;S[i]!='\0';i++){
    }
    cout<<i<<endl;
    // Changing Cases of String
    for(i=0;S[i]!='\0';i++){
        if(S[i]>=60 && S[i]<=90){
            S[i] += 32;
        }
        else if(S[i]>=97 && S[i]<=122){
            S[i] -= 32;
        }
    }
    cout<<S<<endl;
    //Counting Vowels and Consonants
    int vcont=0,ccount=0;
    for(i=0;S[i]!='\0';i++){
        if(S[i]=='A'||S[i]=='a'||S[i]=='I'||S[i]=='i'||S[i]=='O'||S[i]=='o'||S[i]=='U'||S[i]=='u'||S[i]=='E'||S[i]=='e'){
            vcont++;
        }
        else if((S[i]>=60 && S[i]<=90)||(S[i]>=97 && S[i]<=122)){
            ccount++;
        }
    }
    cout<<"vowels count: "<<vcont<<endl<<"consonents count: "<<ccount<<endl;

    //Counting Words
    char sen[] = "Dumbledoor mera mama";
    int wcount=1;
    for(i=0;sen[i]!='\0';i++){
        if(sen[i]==' '&& sen[i-1]!=' '){
            wcount++;
        }
    }
    cout<<"word count is "<<wcount<<endl;
    
    //Validating a String
    char user[]="Shadow0w0";
    if(Validate(user)){
        cout<<"VAlid username"<<endl;
    }
    else{
        cout<<"invalid username"<<endl;
    }

    //Reversing the string
     int j;
     char t;
     for(j=0;S[j]!='\0';j++){}
     j=j-1;
     for(i=0;i<j;i++){
        t=S[i];
        S[i]=S[j];
        S[j]=t;
        j--;
     }
     cout<<S<<endl;
     
     //Comparing Strings
     char name1[]="suruj";
     char name2[]="surya";
    for(i = 0,j=0;name1[i]!='\0' && name2[j]!='\0';i++,j++){
        if(name1[i]!=name2[j]){
            cout<<"this letter are not same: "<<name1[i]<<"  "<<name2[j]<<endl;
            if(name1[i]<name2[j]){
                cout<<"this word is above in dictionary"<<endl;
            }
            else{
                cout<<"this word is below in dictionary"<<endl;
            }
        }
        else if(name1[i]==name2[j]){
            cout<<"this letter is same: "<<name1[i]<<endl;
        }
    }

    //Pallindrom of string: reverse the string and then compare it with original string

    // Finding Duplicate in string: Hashmap method
    int hash[26]={0,0,0,0,0};
    for(i=0;name1[i]!='\0';i++){
        hash[name1[i]-97]++;
    }
    for(i=0;i<26;i++){
        if(hash[i]>1){
            printf("%c is present multiple time in string\n",i+97);
        }
    }
    // Finding Duplicate in string: Bitwise method
    /*Bitwise operationns
    1.left shift <<
    2.bits ORing &
    3.bits ANDing |
    */
   long int h=0, x=0;
    for(i=0;name1[i]!='\0';i++){
        x=1;
        x=x<<name1[i]-97;
        if(x&h>0){
            printf("%c is duplicate\n",name1[i]);
        }
        else{
            h=x|h;
        }
    }
    return 0;
}