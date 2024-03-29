#include <bits/stdc++.h>
#include <string>
using namespace std;
int main() {
    multimap<string,string> mp;
    int n,m;
    cin>>n>>m;
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        string line,token;
        getline(cin,line);
        size_t pos=0;
        int time=0;
        while((pos = line.find("--")) != string::npos)
        {
            if(time<1)
            {
                token = line.substr(0, pos); //歌手名
            }
            line.erase(0, pos + 2); //将已提取的部分从原始字符串中删除
            time++;
        }
        mp.emplace(line,token); 
    }
    for(int i=0;i<m;i++)
    {
        string name;
        getline(cin,name);
        if(mp.find(name)!=mp.end())//找到歌曲对应歌手
        {
            cout<<mp.find(name)->second<<endl;
        }
        else
        {
            cout<<"Not found!"<<endl;
        }
    }
    return 0;
}