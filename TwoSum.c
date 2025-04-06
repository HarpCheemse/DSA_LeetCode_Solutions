int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    typedef struct
    {
        int key;
        int value;
        UT_hash_handle hh;
    } hashTable;
    hashTable *p = NULL, *item;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        HASH_FIND_INT(p, &complement, item);
        if (item) {
            int* result = malloc(sizeof(int) * 2);
            result[0] = item->value;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        item = malloc(sizeof(hashTable));
        item->key = nums[i];
        item->value = i;
        HASH_ADD_INT(p, key, item);
    }
    return NULL;
}