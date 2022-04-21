#ifdef NIE
struct  t_split   { 	char	swtch;
						char	low;
						char	high;
                        char    transpose;
                        char    outchan;
						char	volume;
                        char    ctrltype0;
					};

struct t_splits	{	struct t_split		split[16];
				};

struct	t_splitpgm	{	unsigned	int	swtch;
						unsigned	int	pgmbank0;
						unsigned	int	pgmbank32;
						unsigned	int	pgm;
						unsigned	int	chan;
					};

struct	t_song	{	char				pgmname[32];
					char				jv1080_panelmode;
										/*	0: performance	*/
										/*	1: patch		*/
										/*	2: no change	*/
					char				jv1080_bank0;
					char				jv1080_bank32;
					char				jv1080_pgm;
					struct t_splits		**next_splits;
					struct t_splitpgm	splitpgm[16];
				};

#endif

extern struct t_song *SongListe[100];
