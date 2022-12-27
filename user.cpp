#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> Subscriptions(int budget){
   vector<vector<int>> Combination;
   int TOI, Hindu, ET, BM, HT;
   for (TOI = 0; TOI <= budget; TOI++) {
      for (Hindu = 0; Hindu <= budget; Hindu++) {
         for (ET = 0; ET <= budget; ET++) {
            for (BM = 0; BM <= budget; BM++) {
               for (HT = 0; HT <= budget; HT++) {
                  if (TOI + Hindu + ET + BM + HT == budget) {
                     vector<int> combination = {TOI, Hindu, ET, BM, HT};
                     Combination.push_back(combination);
                  }
               }
            }
         }
      }
   }
   return Combination;
}

int main() {
   int budget;
   cout << "Enter the budget ";
   cin >> budget;

   vector<vector<int>> Combination = Subscriptions(budget);

   cout << " combinations of newspaper subscriptions for the given budget are: " << endl;
   for (int i = 0; i < Combination.size(); i++) {
      cout << "TOI: " << Combination[i][0] << " Hindu: " << Combination[i][1] << " ET: " << Combination[i][2] << " BM: " << Combination[i][3] << " HT: " << Combination[i][4] << endl;
   }

   return 0;
}
