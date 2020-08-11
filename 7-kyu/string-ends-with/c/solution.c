#include <stdbool.h>
#include <string.h>
bool solution(const char *string, const char *ending)
{
    int N = strlen(string);
    int M = strlen(ending);
    bool isend = true;
    if (M > N)
    return false;
    for (int i = 1; i <= M; i++){
      if (string[N-i] != ending[M-i])
        isend = false;
    }
    return isend;
}