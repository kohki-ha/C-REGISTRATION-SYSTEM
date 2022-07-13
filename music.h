#ifndef __MUSIC_TYPE_H__
#define __MUSIC_TYPE_H__

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int id;
    char name[30];
    char genre[30];
    char album[30];
    float song_length;
    Date release_date;
} Music;

#endif