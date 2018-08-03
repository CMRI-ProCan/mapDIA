/*
   Copyright (C) <2015-2017> Guoshou Teo <guoshou@u.nus.edu> and
   Hyungwon Choi <hyung_won_choi@nuhs.edu.sg>,
   National University of Singapore.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
   */


#include<iostream>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include<vector>
#include<algorithm>
#include<stdexcept>

#include<iomanip>
#include<set>
#include<map>
#include<numeric>
#include<iterator>
#include<climits>
#include<cfloat>


using namespace std;

inline bool obs(const double x) { return !isnan(x); }


template<typename Target,typename Source> Target to(Source arg)
{
    stringstream interpreter;
    Target result;
    if (!(interpreter<<arg) || !(interpreter>>result) || !(interpreter>>ws).eof()) {
        throw runtime_error("format error");
    }
    return result;
}
