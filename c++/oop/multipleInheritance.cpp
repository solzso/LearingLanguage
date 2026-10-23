#include <bits/stdc++.h>

using namespace std;

class Footballer {
public: 
  int match_played;
  int goal; 
  int avg_play_time; 
};

class Engineer {
public:
  int experience; 
  int salary; 
  string domain; 
};

class FooPlusEng : public Footballer, Engineer{
public : 
  string name; 
};

int main() {
  FooPlusEng f; 
  f.match_played = 500;

  cout << f.match_played << '\n'; 
  
  return 0;
}