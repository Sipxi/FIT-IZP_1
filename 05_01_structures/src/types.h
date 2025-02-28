/**
 * Hlavičkový soubor types.h
 *
 *     OBSAH V TOMTO SOUBROU NEUPRAVUJTE!
 */

 #ifndef TYPES_H
 #define TYPES_H
 
 #include <stdbool.h>
 
 // DEKLAROVANÉ HLAVIČKY FUNKCÍ A STRUKTUR NIJAK NEMĚŇTE
 
 // Structures allow us to "bundle" number of variables that are related together
 // e.g., date consists of year, month and day
 //
 // To access specific elements of our date structure, we use the "dot" notation:
 // date.year, date.month, date.day, etc.
 
 #define DATE1_IS_EARLIER -1
 #define DATE1_IS_LATER 1
 #define DATES_ARE_EQUAL 0
 
 // Date structure
 struct date_t {
   int year;
   int month;
   int day;
 };
 
 // Time structure
 struct time_t {
   int hour;
   int min;
   int sec;
 };
 
 bool is_valid_date(struct date_t date);
 
 int earlier_date(struct date_t date1, struct date_t date2);
 
 #endif
 