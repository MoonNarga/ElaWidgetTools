#ifndef ELAWIDGETTOOLS_ELAPACKETIO_ELAPACKETIO_EXPORT_H_
#define ELAWIDGETTOOLS_ELAPACKETIO_ELAPACKETIO_EXPORT_H_

#ifdef ELAPACKETIO_LIBRARY
#define ELA_PACKETIO_EXPORT __declspec(dllexport)
#else
#define ELA_PACKETIO_EXPORT __declspec(dllimport)
#endif

#endif //ELAWIDGETTOOLS_ELAPACKETIO_ELAPACKETIO_EXPORT_H_
