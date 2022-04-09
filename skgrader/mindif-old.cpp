#include <stdio.h>

int* sort(int arr[]){
	int size = sizeof(arr);
	if (size > 1){
		int less[1000];
		int equal[1000];
		int greater[1000];
		int pivot = arr[0];
		int l = 0;
		int e = 0;
		int g = 0;
		for (int i = 0; i < size; i++){
			if (arr[i] < pivot){
				less[l] = arr[i];
				l++; 
			} else if (arr[i] == pivot){
				equal[e] = arr[i];
				e++;
			} else {
				greater[g] = arr[i];
				g++;
			}
		}
		int x = l+e+g;
		int result[x];
		for (int i = 0; i < l; i++){
			result[i] = less[i];
		} 
		for (int i = 0; i < e; i++){
			result[i] = equal[i];
		}
		for (int i = 0; i < g; i++){
			result[i] = greater[i];
		}
		return result;
	}
	else {
		return arr;
	}
}

int main()
{
	int n, s;
	scanf("%d %d", &n, &s);
	int nums[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &nums[i]);
	}

	int sortednum[n] = sort(nums);
	int pi = 89234589;
	for (int i = 0; i < s; i++){ 
		if (pi != sortednum[i]){
			printf("%d", sortednum[i]);
		}
		pi = i;
	}
}
