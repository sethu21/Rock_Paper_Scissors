//g++ -o ex_01 ex_01.cpp && ./ex_01
#include <iostream>
using namespace std;

enum class Letter_grade {A,B,C,D,F};

ostream& operator<<(ostream& os, const Letter_grade& grade);

Letter_grade calculate_letter_grade(double score);

int main(){
  double score;
  cout << "Enter the students score (0 to 100): ";
  cin >> score;

  if (score >= 0 && score <= 100){
    Letter_grade grade = calculate_letter_grade(score);
    cout << "Letter grade: " << grade << endl;
  } else {
    cout << "invalid score. please enter a score between 0 to 100." << endl;
  }
  return 0;
  
}

ostream& operator<<(ostream& os, const Letter_grade& grade){
  switch (grade) {
    case Letter_grade:: A: os <<"A";break;
      case Letter_grade:: B: os <<"B"; break;  
    case Letter_grade:: C: os <<"C";
    break;
      case Letter_grade:: D: os <<"D";
    break;
      case Letter_grade:: F: os <<"F";
    break;
    
    
  }
  return os;
}
Letter_grade calculate_letter_grade(double score) {
  if (score >= 90) {
    return Letter_grade::A;
  }else if (score >= 80) {
    return Letter_grade::B;
  }else if (score >= 70) {
    return Letter_grade::C;
  }else if (score >= 60) {
    return Letter_grade::D;
  } else  {
    return Letter_grade::F;
  }
}

