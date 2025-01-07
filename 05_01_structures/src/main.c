#include "types.h"
#include <stdio.h>

/**
 * Determine whether the provided date is valid. Respect leap years with extra
 * days, different month lengths and assume that the only valid years are above
 * 1500 and below 3000.
 *
 * @param date Datová struktura reprezentující datum
 *
 * @return `true` v případě validního data, `false` jinak
 */
bool is_valid_date(struct date_t date)
{
    //* WHO THOUGHT OF THIS?!
    //* THIS IS THE MOST STUPIDEST SHIT I'VE EVER WRITTEN
    if (date.year <= 1500 || date.year >= 3000) {
        return false;
    }
    if (date.month > 12 || date.month < 1) {
        return false;
    }
    if (date.day < 1 || date.day > 31) {
        return false;
    }
    if (date.month == 2) {
        //* FUCK OFF
        if (!(date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0) {
            if (date.day != 28) {
                return false;
            }
        } else if (date.day != 29) {
            return false;
        }
    }

    if (date.month == 4 && date.day > 30 || date.month == 6 && date.day > 30 || date.month == 9 && date.day > 30 ||
        date.month == 11 && date.day > 30) {
        return false;
    }
    return true;
}

// TODO: implementujte funkci dle zadání

/**
 * Find the earlier date by comparing years, months and days.
 *
 * @param date1 Datová struktura reprezentující první datum
 * @param date2 Datová struktura reprezentující druhé datum
 *
 * @return `DATE1_IS_EARLIER` v případě že date1 je dřívější,
 *     `DATE1_IS_LATER` když date2 je dřívější,
 *     `DATES_ARE_EQUAL` jinak (data jsou stejná)
 */
int earlier_date(struct date_t date1, struct date_t date2)
{
    //* Compare, that's it

    if (date1.year < date2.year) {
        return -1;
    } else if (date1.year > date2.year) {
        return 1;
    }


    if (date1.month < date2.month) {
        return -1;
    } else if (date1.month > date2.month) {
        return 1;
    }


    if (date1.day < date2.day) {
        return -1;
    } else if (date1.day > date2.day) {
        return 1;
    }


    return 0;
}

#ifndef TEST_BUILD

int main(void)
{
    struct date_t date1, date2;

    // Load two dates from the user
    printf("Provide the first date (format yyyy-mm-dd): ");
    scanf("%d-%d-%d", &date1.year, &date1.month, &date1.day);

    printf("Provide the second date (format yyyy-mm-dd): ");
    scanf("%d-%d-%d", &date2.year, &date2.month, &date2.day);

    // Check that the dates are valid
    if (!is_valid_date(date1) || !is_valid_date(date2)) {
        printf("Invalid date!\n");
        return 1;
    }

    // Compare the dates and find the earlier one
    int earlier_result = earlier_date(date1, date2);
    if (earlier_result == DATE1_IS_EARLIER) {
        printf("The date %d-%d-%d is earlier.\n", date1.year, date1.month, date1.day);
    } else if (earlier_result == DATE1_IS_LATER) {
        printf("The date %d-%d-%d is earlier.\n", date2.year, date2.month, date2.day);
    } else {
        printf("The dates are the same.\n");
    }

    return 0;
}

#endif
