class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        int importance = 0;
        vector<int> list ;
        
        for(int i = 0 ; i < employees.size() ; i++){
            if(employees[i]->id == id){
                importance += employees[i]->importance;
                list=employees[i]->subordinates;
                while(!list.empty()){
                    for(int p = 0 ; p<employees.size() ; p++){
                        if(employees[p]->id == list.back()){
                            importance += getImportance(employees, employees[p]->id);
                        }
                        
                    }
                        
                        
                    list.pop_back();
                }
            }
        }
    }
};