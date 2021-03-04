// 30_string_6.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
  string base = "this is a test string.";
  string str2 = "n example";
  string str3 = "sample phrase";
  string str4 = "useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                    0123456789*123456789*12345
  string str = base;                 // "this is a test string."

  // 9번째부터 5개의 글자( test)를 str2로 바꾼다.
  str.replace(9, 5, str2);           // "this is an example string." (1) 
  cout<<"결과1: "<<str<<endl;

  // 19번째부터 6개의 글자(string)를 str3의 7번째부터 6개의 글자(phrase)로 바꾼다.
  str.replace(19, 6, str3, 7, 6);    // "this is an example phrase." (2)
  cout<<"결과2: "<<str<<endl;

  // 8번째부터 10개의 글자(an example)를 just a 로 바꾼다.
  str.replace(8, 10, "just a");      // "this is just a phrase."     (3)
  cout<<"결과3: "<<str<<endl;
  
  // 8번째부터 6개의 글자(just a)를 a shorty에서 7개의 글자(a short)로 바꾼다.  
  str.replace(8, 6, "a shorty", 7);  // "this is a short phrase."    (4)
  cout<<"결과4: "<<str<<endl;

  // 22번째부터 1개의 글자(.)를 3개의 '!'로 바꾼다.  
  str.replace(22, 1, 3, '!');        // "this is a short phrase!!!"  (5)
  cout<<"결과5: "<<str<<endl;

  // Using iterators: 0123456789*123456789*
  //                 "this is a short phrase!!!"
  // 해당 범위를 str3로 치환한다. sample phrase + !!!
  str.replace(str.begin(), str.end() - 3, str3);  // "sample phrase!!!"      (1)
  cout<<"결과6: "<<str<<endl;

  // sample 을 replace 로 변경한다.
  str.replace(str.begin(), str.begin() + 6, "replace");  // "replace phrase!!!"     (3)
  cout<<"결과7: "<<str<<endl;

  // phrase 를 is coolness 로 바꾼다.
  str.replace(str.begin() + 8, str.begin() + 14, "is coolness", 7);  // "replace is cool!!!"    (4)
  cout<<"결과8: "<<str<<endl;

  // oo를 o 4개로 바꾼다.
  str.replace(str.begin() + 12, str.end() - 4, 4, 'o');  // "replace is cooool!!!"  (5)
  cout<<"결과9: "<<str<<endl;

  // cooool!!! 를 str4(useful.)로 바꾼다.
  str.replace(str.begin() + 11, str.end(), str4.begin(), str4.end());  // "replace is useful."    (6)
  cout <<"최종 : "<< str << '\n';

  return 0;
}