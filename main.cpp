#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <string>
#include <tuple>
#include <algorithm>
#include <iterator>

using namespace std;

template< class T >
void print_words(T frst,T last)
{
    set<string> myset;
    while (frst != last)
    {
        //iterator_traits<it>::value_type x;
        myset.insert(*frst);
        frst++;
    }
    for(auto x: myset)
    {
        cout<<x<<' ';
    }
    cout<<endl;
}

void task1()
{
    vector<string> vec = {"hello","book","window","book","math","king","king"};
    set<string> se = {"hello","book","window","book","math","king","king"};
    list<string> ls = {"hello","book","window","book","math","king","king"};
    print_words<vector<string>::iterator>(vec.begin(),vec.end());
    print_words<set<string>::iterator>(se.begin(),se.end());
    print_words<list<string>::iterator>(ls.begin(),ls.end());
}
void task2()
{
    string input_str = "one. two. three. four. five. six. seven. eight. nine. ten. eleven. twelve.";
    set<pair<int,string> > mp;
    while (input_str != "")
    {
        auto dot_pos = input_str.find('.');
        string subs = input_str.substr(0,dot_pos);
        input_str = input_str.substr(dot_pos+1);
        mp.insert(pair(subs.length(),subs));
    }
    for (auto x: mp)
        cout<<x.first<<' '<<x.second<<endl;
    cout<<endl;
}
int main()
{
    task1();
    task2();
    cout << "Hello World!" << endl;
    return 0;
}
