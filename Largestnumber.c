char * largestNumber(int* nums, int numsSize){
	char* zero = "0";
	char** temp = malloc(sizeof(char*) * numsSize);
	for (int i = 0; i < numsSize; i++) {
		temp[i] = malloc(sizeof(char) * 10);
		sprintf(temp[i], "%d", nums[i]);
	}
	qsort(temp, numsSize, sizeof(char*) , compare);

	if (!strcmp(temp[0], "0")) { return "0"; }

	char* ans = malloc(sizeof(char) * 500);
	ans[0] = '\0';
	for (int i = 0; i < numsSize; i++) {
		strcat(ans, temp[i]);
	}
	printf("%s", ans);
	return ans;
}
