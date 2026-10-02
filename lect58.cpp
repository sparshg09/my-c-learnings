#include<iostream>
#include<cstring>
using namespace std; 

class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s,float r){
        title=s;
        rating=r;
    }
    virtual void display()=0//do nothing function-->pure virtual function
    //ye kaha rha h mujhe aage jaake overwrite kardena
};
class cwhvideo:public cwh{
    float videolength;
    public:
    cwhvideo(string s,float r,float vl):cwh(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"this video title is "<<title<<endl;
        cout<<"rating :"<<rating<<endl;
        cout<< "length of video is :"<<videolength<<"minutes"<<endl;
    }
};
class cwhtext:public cwh{
    int words ;
    public:
    cwhtext(string s,float r,int wc):cwh(s,r){
      words=wc;
    }
    void display(){
        cout<<" title is "<<title<<endl;
        cout<<"rating of text:"<<rating<<endl;
        cout<< "no. of words is :"<<words<<endl;
    } 
    
};
int main(){
    string title;
    float rating,vlen;
    int words;
    
    //for cwhvideo
    title="sparsh very prety";
    vlen=4.56;
    rating=3.5;
    cwhvideo spvideo(title,rating,vlen);
    spvideo.display();
    
    //for cwhtext
    title="sparsh very sexy";
    words=456;
    rating=3.9;
    cwhtext sptext(title,rating,words);
    sptext.display();

    cwh* tuts[2];
    tuts[0]=&spvideo;
    tuts[1]=&sptext;
    tuts[0]->display();//ab agar upar base class me virtual nhi likha hota toh base class ka display run ho jaata
    tuts[1]->display();//ab agar upar base class me virtual nhi likha hota toh base class ka display run ho jaata

    return 0;
} 