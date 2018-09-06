/* Define the RPC protocol */
const MAXSTRLEN = 100;
typedef string filestr<MAXSTRLEN>;

program REMFILEPROG {
	version REMFILEVERS {
		filestr GETFILESTR() = 1;
	} = 1;
} = 0x209090909;
