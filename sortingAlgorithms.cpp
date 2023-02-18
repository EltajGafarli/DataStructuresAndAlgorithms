#include<bits/stdc++.h>
using namespace std;

class SortMe{
	private:
	    vector<int> array;

		void bubble_sort(vector<int>& arr){
			int size = arr.size();
			for(int i = 0; i < size; i ++){
				for(int j = 0; j < size - i - 1; j ++){
					if(arr[j] > arr[j + 1]){
						swap(arr[j], arr[j + 1]);
					}
				}
			}
		}


		void insertion_sort(vector<int>& arr){
			int size = arr.size();
			for(int i = 0; i < size; i ++){
				int min = i;
				for(int j = i + 1; j < size; j ++){
					if(arr[j] < arr[min]){
						min = j;
					}
				}
				swap(arr[i], arr[min]);
			}

		}


		void counting_sort(vector<int> &arr){
			int size = arr.size();

			vector<int> out(size);

			// 0 <= arr[i] <= 1000
			int count[1001];
			int size = arr.size();
			for(int i = 0; i < size; i ++){
				count[arr[i]] ++;
			}

			for(int i = 1; i < 1001; i ++){
				count[i] += count[i - 1];
			}

			for(int i = 0; i < size; i ++){
				out[count[arr[i]] - 1] = arr[i];
				count[arr[i]] --;
			}

			return out;

		}

		void like_normal_human(vetor<int>& arr){
			sort(begin(arr), end(arr)) 
			// or
			sort(arr.begin(), arr.end());
		}

	public:
	    SortMe(){}
		SortMe(vector<int> array){
			this->array = array;
		}

		void bubble_sort(){
			this->bubble_sort(this->array);
		}

		void insertion_sort(){
			this->insertion_sort(this->array);
		}

		void counting_sort(){
			this->counting_sort(this->array);
		}

		void like_normal_human(){
			this->like_normal_human(this->array);
		}
		
}


int main(){}
