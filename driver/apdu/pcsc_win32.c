#ifdef _WIN32
#include "pcsc_win32.h"

#define PCSC_ERROR_CASE(NAME) case NAME: return #NAME

const char *pcsc_stringify_error(const LONG err) {
  switch (err) {
    PCSC_ERROR_CASE(SCARD_S_SUCCESS);
    PCSC_ERROR_CASE(SCARD_F_INTERNAL_ERROR);
    PCSC_ERROR_CASE(SCARD_E_CANCELLED);
    PCSC_ERROR_CASE(SCARD_E_INVALID_HANDLE);
    PCSC_ERROR_CASE(SCARD_E_INVALID_PARAMETER);
    PCSC_ERROR_CASE(SCARD_E_INVALID_TARGET);
    PCSC_ERROR_CASE(SCARD_E_NO_MEMORY);
    PCSC_ERROR_CASE(SCARD_F_WAITED_TOO_LONG);
    PCSC_ERROR_CASE(SCARD_E_INSUFFICIENT_BUFFER);
    PCSC_ERROR_CASE(SCARD_E_UNKNOWN_READER);
    PCSC_ERROR_CASE(SCARD_E_TIMEOUT);
    PCSC_ERROR_CASE(SCARD_E_SHARING_VIOLATION);
    PCSC_ERROR_CASE(SCARD_E_NO_SMARTCARD);
    PCSC_ERROR_CASE(SCARD_E_UNKNOWN_CARD);
    PCSC_ERROR_CASE(SCARD_E_CANT_DISPOSE);
    PCSC_ERROR_CASE(SCARD_E_PROTO_MISMATCH);
    PCSC_ERROR_CASE(SCARD_E_NOT_READY);
    PCSC_ERROR_CASE(SCARD_E_INVALID_VALUE);
    PCSC_ERROR_CASE(SCARD_E_SYSTEM_CANCELLED);
    PCSC_ERROR_CASE(SCARD_F_COMM_ERROR);
    PCSC_ERROR_CASE(SCARD_F_UNKNOWN_ERROR);
    PCSC_ERROR_CASE(SCARD_E_INVALID_ATR);
    PCSC_ERROR_CASE(SCARD_E_NOT_TRANSACTED);
    PCSC_ERROR_CASE(SCARD_E_READER_UNAVAILABLE);
    PCSC_ERROR_CASE(SCARD_P_SHUTDOWN);
    PCSC_ERROR_CASE(SCARD_E_PCI_TOO_SMALL);
    PCSC_ERROR_CASE(SCARD_E_READER_UNSUPPORTED);
    PCSC_ERROR_CASE(SCARD_E_DUPLICATE_READER);
    PCSC_ERROR_CASE(SCARD_E_CARD_UNSUPPORTED);
    PCSC_ERROR_CASE(SCARD_E_NO_SERVICE);
    PCSC_ERROR_CASE(SCARD_E_SERVICE_STOPPED);
    PCSC_ERROR_CASE(SCARD_E_UNEXPECTED);
    PCSC_ERROR_CASE(SCARD_E_ICC_INSTALLATION);
    PCSC_ERROR_CASE(SCARD_E_ICC_CREATEORDER);
    PCSC_ERROR_CASE(SCARD_E_UNSUPPORTED_FEATURE);
    PCSC_ERROR_CASE(SCARD_E_DIR_NOT_FOUND);
    PCSC_ERROR_CASE(SCARD_E_FILE_NOT_FOUND);
    PCSC_ERROR_CASE(SCARD_E_NO_DIR);
    PCSC_ERROR_CASE(SCARD_E_NO_FILE);
    PCSC_ERROR_CASE(SCARD_E_NO_ACCESS);
    PCSC_ERROR_CASE(SCARD_E_WRITE_TOO_MANY);
    PCSC_ERROR_CASE(SCARD_E_BAD_SEEK);
    PCSC_ERROR_CASE(SCARD_E_INVALID_CHV);
    PCSC_ERROR_CASE(SCARD_E_UNKNOWN_RES_MNG);
    PCSC_ERROR_CASE(SCARD_E_NO_SUCH_CERTIFICATE);
    PCSC_ERROR_CASE(SCARD_E_CERTIFICATE_UNAVAILABLE);
    PCSC_ERROR_CASE(SCARD_E_NO_READERS_AVAILABLE);
    PCSC_ERROR_CASE(SCARD_E_COMM_DATA_LOST);
    PCSC_ERROR_CASE(SCARD_E_NO_KEY_CONTAINER);
    PCSC_ERROR_CASE(SCARD_E_SERVER_TOO_BUSY);
    PCSC_ERROR_CASE(SCARD_E_PIN_CACHE_EXPIRED);
    PCSC_ERROR_CASE(SCARD_E_NO_PIN_CACHE);
    PCSC_ERROR_CASE(SCARD_E_READ_ONLY_CARD);
    PCSC_ERROR_CASE(SCARD_W_UNSUPPORTED_CARD);
    PCSC_ERROR_CASE(SCARD_W_UNRESPONSIVE_CARD);
    PCSC_ERROR_CASE(SCARD_W_UNPOWERED_CARD);
    PCSC_ERROR_CASE(SCARD_W_RESET_CARD);
    PCSC_ERROR_CASE(SCARD_W_REMOVED_CARD);
    PCSC_ERROR_CASE(SCARD_W_SECURITY_VIOLATION);
    PCSC_ERROR_CASE(SCARD_W_WRONG_CHV);
    PCSC_ERROR_CASE(SCARD_W_CHV_BLOCKED);
    PCSC_ERROR_CASE(SCARD_W_EOF);
    PCSC_ERROR_CASE(SCARD_W_CANCELLED_BY_USER);
    PCSC_ERROR_CASE(SCARD_W_CARD_NOT_AUTHENTICATED);
    PCSC_ERROR_CASE(SCARD_W_CACHE_ITEM_NOT_FOUND);
    PCSC_ERROR_CASE(SCARD_W_CACHE_ITEM_STALE);
    PCSC_ERROR_CASE(ERROR_IO_DEVICE);
    PCSC_ERROR_CASE(ERROR_BROKEN_PIPE);
    default:
      return "Unknown error";
  }
}

#undef PCSC_ERROR_CASE

#endif
