#include <iostream>
using namespace std;

int main()
{
 int score1,score2,score3;
    std::cout<<"輸入三次成績要用空格分開";
cin>>score1>>score2>>score3;

double average = (score1+score2+score3)/score3;
bool hasBelow40 = (score1<40)||(score2<40)||(score3<40);

if (hasBelow40 ) {
    cont<<"此學科不及格";
} else if (average >= 60 ){
    cont<<"此學科通過學科通過";
} else {
    cont<<"此學科不及格";
}
  
    return 0;
}