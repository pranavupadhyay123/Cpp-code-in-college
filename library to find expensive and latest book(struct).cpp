#include<iostream>
#include<algorithm>
using namespace std;
struct book{
    string title,author,isbn;
    int price,year;
};

int main(){
    int total_books;
    int latest,expensive;
    cin>>total_books;
    struct book books[total_books];
    
    for(int i=0;i<total_books;i++){
        cout<<"please enter the title,authour,price,year,isbn"<<endl;
        cin>>books[i].title>>books[i].author>>books[i].price>>books[i].year>>books[i].isbn;
    }
    
    for(int i=0;i<total_books;i++){
        latest=books[0].year;
        if (books[i].year>books[i+1].year){
        latest=books[i].year;}
    }
    
    for(int i=0;i<total_books;i++){
        expensive=books[0].price;
        if (books[i].price>books[i+1].price){
        expensive=books[i].price;}
    }
    cout<<latest<<endl;
    cout<<expensive<<endl;
}