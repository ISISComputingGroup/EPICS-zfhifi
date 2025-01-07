TOP=..
include $(TOP)/configure/CONFIG
#=======================================

# Install .dbd and .db files
DB += zfhifi.db
DB += zfhifi_magnetometer_axis.db
DB += zfhifi_field_axis.db
DBD += zfhifi.dbd

# Sequence file
LIBRARY_IOC = zfhifi
zfhifi_SRCS += zero_field.st
zfhifi_LIBS += seq pv
zfhifi_LIBS += $(EPICS_BASE_IOC_LIBS)

#=======================================
include $(TOP)/configure/RULES
