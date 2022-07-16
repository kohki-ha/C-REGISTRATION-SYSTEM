#ifdef _WIN32
#define CLEAN "cls"
#else
#define CLEAN "clear"
#endif

#ifndef __MUSIC_TYPE__
#define __MUSIC_TYPE__
typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{
    int minutes;
    int seconds;
} Song_length;

typedef struct
{
    int id;
    int id_artist;
    char name[21];
    char album[21];
    char genre[21];
    Song_length song_length;
    Date release_date;
} Music;
#endif //__MUSIC_TYPE__

#ifndef __ARTIST_TYPE__
#define __ARTIST_TYPE__
typedef struct
{
    int id;
    char name[21];
    int age;
    char gender[21];
    char country[21];
    //Music *music;
} Artist;
#endif //__ARTIST_TYPE__

#ifndef __ARTIST_H__
#define __ARTIST_H__
void register_artist(Artist *artist);
char edit_artist_options(Artist *artist);
void edit_artist_name(Artist *artist);
void edit_artist_age(Artist *artist);
void edit_artist_gender(Artist *artist);
void edit_artist_country(Artist *artist);
void edit_artist(Artist *artist, Music *music);
void edit_artist_by_artist_id(Artist *artist, Music *music, int artist_length);
void edit_artist_by_music_id(Artist *artist, Music *music, int artist_length, int music_length);
void list_artist(Artist *artist, int artist_length);
void remove_artist_by_artist_id(Artist *artist, Music *music, int artist_length, int music_length, int id);
void remove_artist_by_music_id(Artist *artist, Music *music, int artist_length, int music_length);
#endif //__ARTIST_H__

#ifndef __MUSIC_H__
#define __MUSIC_H__
void register_music(Music *music);
void edit_music_name(Music *music);
void edit_music_album(Music *music);
void edit_music_genre(Music *music);
void edit_music_song_length(Music *music);
void edit_music_release_date(Music *music);
void edit_music(Music *music);
int artists_num_of_music(Artist *artist, Music *music, int music_length);
void show_artists_musics(Artist *artist, Music *music, int music_length);
void edit_music_by_artist_id(Artist *artist, Music *music, int artist_length, int music_length);
void edit_music_by_music_id(Music *music, int artist_length, int music_length);
void list_music(Music *music, int music_length, Artist *artist);
#endif //__MUSIC_H__

#ifndef __MENU_H__
#define __MENU_H__
void initialize_artist(Artist *artist);
void initialize_music(Music *music);
int select_artist(Artist *artist, int artist_length);
char menu_options();
Artist *realloc_artist(Artist *artist, int *artist_length);
Artist *register_artist_option(Artist *artist, int *artist_length, int *counter_artist);
Music *realloc_music(Music *music, int *music_length);
int verify_registered_artist(Artist *artist, int artist_length);
Music *register_music_option(Artist *artist, int artist_length, Music *music, int *music_length, int *counter_music);
int verify_registered_music(Music *music, int music_length);
char menu_register();
char menu_edit_main();
char menu_edit_by();
char menu_list();
char menu_remove();
char menu_search();
void list_all(Artist *artist, Music *music, int artist_length, int music_length);
void menu_main(Artist *artist, Music *music);
#endif //__MENU_H__