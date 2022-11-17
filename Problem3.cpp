#include <iostream>
#include "Problem3.h"
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;



int threeA(){
    ifstream txtfile;
    txtfile.open("BigData.txt");
    string word;
    int count = 0;
    int lettercount = 0;
    
    
    if(txtfile.is_open()){
            while(txtfile){
                txtfile >> word;
                for (int i = 0; i < word.length(); i++){
                
                    if(isalpha(word[i])){ //checks if character is a letter
                        lettercount++;
                    } 
                }
                if(lettercount == word.length()){ // if the amount of letters is the same amount length incs count
                    count++;
                }
                lettercount = 0;
            }
    txtfile.close();
    return count;
    }else {
        cout<<"Error! File could not be opened!"<<endl;
        return 0;
    
    }

}


int threeB(){
    int alphacheck[26] = {0};
    ifstream txtfile;
    txtfile.open("BigData.txt");
    string word;
    int count = 0;
    int letterint;
    char letter;
    int sum;
    int finalcount;
    
    
    if(txtfile.is_open()){
            while(txtfile){
                letter = txtfile.get();
            count++;
            letterint = tolower(letter);
            if (isalpha(letter)){
                if(letterint>=97 && letterint<=122){
                    alphacheck[letterint-97]=1;
                   
                }
                for(int i=0;i<26;i++){
                    if(alphacheck[i]>=1){
                        sum++;
                    } else sum = 0;
             }
                if(sum>0)
                 return count;
                      }
            }
    
    
    }else {
        cout<<"Error! File could not be opened!"<<endl;
        return 0;
    
    }
}


int threeC(){
 
string words[200];
ifstream txtfile;
    txtfile.open("BigData.txt");
    string word;
    int count = 0;
    int lettercount = 0;
    
   //checks for words containing only letters like part a 
    if(txtfile.is_open()){
            while(txtfile){
                txtfile >> word;
                for (int i = 0; i < word.length(); i++){
                
                    if(isalpha(word[i])){
                        lettercount++;
                    } 
                }
                if(lettercount == word.length()){
                    count++;
                    words[count-1]=word; //creates array of words
                }
                lettercount = 0;
            }
    txtfile.close();
      
    }else {
        cout<<"Error! File could not be opened!"<<endl;
        return 0;
    
    }



ifstream txtfile2;
txtfile2.open("Dictionary.txt");
string dicword;
int maincount = 0;


    
    if(txtfile2.is_open()){
            while(txtfile2){
                txtfile2 >> dicword; //opens dictionary file
//compares strings to current dictionary word, only increments if j isn't in each word
                for (int i = 0; i < count; i++){
                    
                    if((words[i])==(dicword) && (words[i].find("j")||words[i].find("J")) ){ 
                       
                     maincount++;
                    }
                    
                } 
            }
            
    return maincount;

    } else {
        cout<<"Error! File not opened!"<<endl;
        return 0;
   
    } 

}
