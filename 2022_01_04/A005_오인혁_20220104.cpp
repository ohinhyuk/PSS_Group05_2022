#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = -1;
    int count = 0;
    bool e = false;
    for(int i = 0 ; i < skill_trees.size() ; i++){        
        for(int j = 0; j< skill.size()-1 ; j++){
            for(int k = j; k < skill.size(); k++){
               if((skill_trees[i].find(skill[k])!=string::npos) && (skill_trees[i].find(skill[j])!=string::npos)  && (skill_trees[i].find(skill[j]) > skill_trees[i].find(skill[k])))
                {
                    e = true;
                    break;
                }
                if(skill_trees[i].find(skill[j])== string::npos && skill_trees[i].find(skill[k])!=string::npos){
                    e = true;
                    break;
                }
            }
            if(e == true){
                break;
            }
        }
        if(e == true){
            e = false;
        }
        else{
            count++;
        }
    }
    answer = count;
    return answer;
}

int main(int args, char ** argv){
    string s = "CBD";
    vector<string> skill ;
    skill.push_back("BACDE");
    skill.push_back("CBADF");
    skill.push_back("AECB");
    skill.push_back("BDA");
    cout << solution(s,skill);
}