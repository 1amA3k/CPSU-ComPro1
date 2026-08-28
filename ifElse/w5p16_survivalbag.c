#include <stdio.h>

int main() {
    int water, bread, egg;
    int bag_from_water, bag_from_bread, bag_from_egg, max_bags;
    int remaining_water, remaining_bread, remaining_egg;

    scanf("%d %d %d", &water, &bread, &egg);
    bag_from_water = water / 3;
    bag_from_bread = bread / 4;
    bag_from_egg = egg / 2;
    max_bags = bag_from_water;

    if (bag_from_bread < max_bags) {
        max_bags = bag_from_bread;
    }
    if (bag_from_egg < max_bags) {
        max_bags = bag_from_egg;
    }

    remaining_water = water - (max_bags * 3);
    remaining_bread = bread - (max_bags * 4);
    remaining_egg = egg - (max_bags * 2);

    printf("%d %d %d %d\n", max_bags, remaining_water, remaining_bread, remaining_egg);

    return 0;
}