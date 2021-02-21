/*
 Main CLI for PiDB
 */
#include <stdio.h>
#include <piMath.h>

#include <dataTypes.h>
#include <byteFinder.h>
#include <getopt.h>
#include <stdlib.h>

//#define USAGE                                                   \
//  "usage:\n"                                                    \
//  "  webclient [options]\n"                                     \
//  "options:\n"                                                  \
//  "  -h                  Show this help message\n"              \
//  "  -r [num_requests]   Request download total (Default: 5)\n" \
//  "  -p [server_port]    Server port (Default: 30605)\n"        \
//  "  -s [server_addr]    Server address (Default: 127.0.0.1)\n" \
//  "  -t [nthreads]       Number of threads (Default 8)\n"       \
//  "  -w [workload_path]  Path to workload file (Default: workload.txt)\n"
///* OPTIONS DESCRIPTOR ====================================================== */
//static struct option gLongOptions[] = {
//		{"help",          no_argument,       NULL, 'h'},
//		{"nthreads",      required_argument, NULL, 't'},
//		{"nrequests",     required_argument, NULL, 'r'},
//		{"server",        required_argument, NULL, 's'},
//		{"port",          required_argument, NULL, 'p'},
//		{"workload-path", required_argument, NULL, 'w'},
//		{NULL,            0,                 NULL, 0}};
//static void Usage() { fprintf(stderr, "%s", USAGE); }

int main(int argc, char **argv) {

//	int option_char = 0;
//	while ((option_char = getopt_long(argc, argv, "p:n:hs:w:r:t:", gLongOptions,
//									  NULL)) != -1) {
//		switch (option_char) {
//			case 'h':  // help
//				Usage();
//				exit(0);
//				break;
//			case 'r':
//				nrequests = atoi(optarg);
//				break;
//			case 'n':  // nrequests
//				break;
//			case 'p':  // port
//				port = atoi(optarg);
//				break;
//			default:
//				Usage();
//				exit(1);
//			case 's':  // server
//				server = optarg;
//				break;
//			case 't':  // nthreads
//				nthreads = atoi(optarg);
//				break;
//			case 'w':  // workload-path
//				workload_path = optarg;
//				break;
//		}
//	}



	printf("Doing the thing\n");

	puts("Pi:");
	printf("%d.", piDigit(0));
	for(int i = 1; i < 500; i++){
		printf("%d", piDigit(i));
	}

	char dataToCompress[11] = "hello world";

	struct compressedData compressed = compress(pi, 8, 11, dataToCompress);


	puts("\nDone.");
	return 0;
}
