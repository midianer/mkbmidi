void Send1080SysByte(long adr, char value);
void SetJV1080PanelMode(char mode);
void Init1080(void);
void Req1080Data(long adr, long size);
void Send1040Msg(char *txt);
/*
int  Get1080SoundName(int num, unsigned char *name);
int  Get1080SoundData(int num, unsigned char *buf);
*/
int Get1080SoundData(long adr, long size, unsigned char *buf);
int Get1080PerfData(void);
#if (MACHINE==GNU_PC)
int Get1080AllSystemData(void);
int Put1080AllSystemData(void);
#endif
/*
int Put1080PerfData(PERF_STR *perf);
*/
int Put1080PerfData(PERF_STR *perf);
int Put1080PerfDataFile(PERF_STR *perf);
int Put1080PerfCommon(PERFCOMMON_STR *perf, int mode);
int Get1080PatchData(void);
int Put1080PatchData(PATCH_STR *patch, long adr);
int Put1080PatchDataFile(PATCH_STR *patch, long adr);
int Write1080PatchData(unsigned char *sbuff, FILE *fp);
int Get1080PerfPatchData(void);
int Get1080AllPerfData(void);
int Get1080AllJv1080Data(void);
int Get1080AllJv1080DataFile(void);
int Cmp1080AllJv1080Data(void);
int Put1080AllJv1080Data(void);


#define JV1080PanelMode_Perf	0
#define JV1080PanelMode_Patch	1
#define JV1080PanelMode_GM      2
