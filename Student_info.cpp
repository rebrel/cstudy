#include "Student_info.h"
 
using std::istream;
using std::vector;
 
bool compare (const Student_info& x,const Student_info& y){
   return x.name < y.name;
}
 
istream& read (istream& in, Student_info& s) {
   in >> s.name>> s.midterm >> s.final;
   read_hw (in, s.homework);
   return in;
}
 
istream& read_hw (istream& in, vector<double>& hw) {
   if (in) {
      hw.clear();
 
      double x;
      while (in >> x)
        hw.push_back(x);
      in.clear();
   }
   return in;
}
