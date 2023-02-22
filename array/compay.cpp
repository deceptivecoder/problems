#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 int solution(vector<int>& V, vector<int>& A, vector<int>& B) {
        vector<int> independent_projects;
        vector<pair<int, int>> project_pairs;
        for (int i = 0; i < V.size(); i++) {
            bool has_requirement = false;
            for (int j = 0; j < A.size(); j++) {
                if (A[j] == i) {
                    has_requirement = true;
                    break;
                }
            }
            if (!has_requirement) {
                independent_projects.push_back(i);
            } else {
                for (int j = 0; j < A.size(); j++) {
                    if (B[j] == i) {
                        project_pairs.emplace_back(i, A[j]);
                        break;
                    }
                }
            }
        }

        sort(independent_projects.begin(), independent_projects.end(), [&V](int a, int b) {
            return V[a] > V[b];
        });
        sort(project_pairs.begin(), project_pairs.end(), [&V](pair<int, int> a, pair<int, int> b) {
            return V[a.first] + V[a.second] > V[b.first] + V[b.second];
        });

        if (independent_projects.size() >= 2) {
            return V[independent_projects[0]] + V[independent_projects[1]];
        } else if (independent_projects.size() >= 1 && project_pairs.size() >= 1) {
            return V[independent_projects[0]] + V[project_pairs[0].second];
        } else if (project_pairs.size() >= 1) {
            return V[project_pairs[0].first] + V[project_pairs[0].second];
        } else {
            return 0;
        }
    }

int main(){
    vector<int> V = {-3,5,7,2,3};
    vector<int> A = {3,1};
    vector<int> B = {2,4};
    cout<<solution(V, A, B)<<endl;
    return 0;
}