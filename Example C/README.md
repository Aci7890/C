# C

fatal error: sys/socket.h: No such file or directory, x86_64-w64-mingw32 mode  https://stackoverflow.com/questions/25736266/fatal-error-sys-socket-h-no-such-file-or-directory-x86-64-w64-mingw32-mode

sys/socket.h  является заголовком POSIX/SUS. 
MinGW предназначен для сборки исполняемых файлов WinAPI. 
Либо переключитесь на сборку с помощью Cygwin GCC, чтобы получить доступ к средствам POSIX/SUS, либо переключитесь на использование WinAPI winsock2.h.
(Для сборки на windows оставить  winsock2.h, в других случаях использовать sys/socket.h)


'ERR_put_error' https://github.com/pyca/cryptography/issues/7828
есть два пакета: openssl-1.1.1q,1 и openssl-devel-3.0.5.

ваша проблема вызвана компиляцией с заголовками из одной версии openssl, но линковкой с другой:
В OpenSSL 1.1.1 ERR_put_errorэто функция, а в 3.0 это макрос. Если вы скомпилировали с 1.1.1, но затем скомпоновали с 3.0, вы получите сообщение об ошибке, подобное этому.


https://qna.habr.com/q/313645

Не могу найти библиотеку #include <avr/pgmspace.h>

#include <avr/pgmspace.h>
const prog_char isrDebug[] = { "\r\nISR debug " };
extern const prog_char isrDebug[] PROGMEM;