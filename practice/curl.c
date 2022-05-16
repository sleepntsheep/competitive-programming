#include <curl/curl.h>
#include <stdio.h>

int main() {
	CURL *curl;
	CURLCODE res;

	curl_global_init(CURL_GLOBAL_ALL);

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://localhost:3000/answers");
		char buf[500];
		sprintf(buf, "password=%d", 1);
		curl_easy_getopt(curl, CURLOPT_POSTFIELDS, buf);

		res = curl_easy_perform(curl);
		printf("%d", res);

		curl_easy_cleanup(curl);
	}

	curl_global_cleanup();
	return 0;
}