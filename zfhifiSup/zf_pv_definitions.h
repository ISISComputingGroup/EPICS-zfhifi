/* Field readings from magnetometer */
PV(double, magnetometer_x, "{P}FIELD:X", Monitor);
PV(double, magnetometer_y, "{P}FIELD:Y", Monitor);
PV(double, magnetometer_z, "{P}FIELD:Z", Monitor);

/* Severities from magnetometer */
PV(int, magnetometer_x_sevr, "{P}FIELD:X.SEVR", Monitor);
PV(int, magnetometer_y_sevr, "{P}FIELD:Y.SEVR", Monitor);
PV(int, magnetometer_z_sevr, "{P}FIELD:Z.SEVR", Monitor);

/* Field setpoints */
PV(double, setpoint_x, "{P}FIELD:X:SP", Monitor);
PV(double, setpoint_y, "{P}FIELD:Y:SP", Monitor);
PV(double, setpoint_z, "{P}FIELD:Z:SP", Monitor);

/* Power supply currents */
PV(double, output_psu_x, "{P}OUTPUT:X", Monitor);
PV(double, output_psu_y, "{P}OUTPUT:Y", Monitor);
PV(double, output_psu_z, "{P}OUTPUT:Z", Monitor);
PV(int, output_psu_x_sevr, "{P}OUTPUT:X.SEVR", Monitor);
PV(int, output_psu_y_sevr, "{P}OUTPUT:Y.SEVR", Monitor);
PV(int, output_psu_z_sevr, "{P}OUTPUT:Z.SEVR", Monitor);

/* PSU Ready statuses */
PV(int, output_psu_x_ready, "{P}OUTPUT:X:READY", Monitor);
PV(int, output_psu_y_ready, "{P}OUTPUT:Y:READY", Monitor);
PV(int, output_psu_z_ready, "{P}OUTPUT:Z:READY", Monitor);

/* Power supply current setpoints */
PV(double, output_psu_x_sp, "{P}OUTPUT:X:SP", NoMon);
PV(double, output_psu_y_sp, "{P}OUTPUT:Y:SP", NoMon);
PV(double, output_psu_z_sp, "{P}OUTPUT:Z:SP", NoMon);
PV(int, output_psu_x_sp_sevr, "{P}OUTPUT:X:SP.SEVR", Monitor);
PV(int, output_psu_y_sp_sevr, "{P}OUTPUT:Y:SP.SEVR", Monitor);
PV(int, output_psu_z_sp_sevr, "{P}OUTPUT:Z:SP.SEVR", Monitor);

/* Power supply current setpoint limits */
PV(double, output_psu_x_sp_drvh, "{P}OUTPUT:X:SP.DRVH", Monitor);
PV(double, output_psu_y_sp_drvh, "{P}OUTPUT:Y:SP.DRVH", Monitor);
PV(double, output_psu_z_sp_drvh, "{P}OUTPUT:Z:SP.DRVH", Monitor);
PV(double, output_psu_x_sp_drvl, "{P}OUTPUT:X:SP.DRVL", Monitor);
PV(double, output_psu_y_sp_drvl, "{P}OUTPUT:Y:SP.DRVL", Monitor);
PV(double, output_psu_z_sp_drvl, "{P}OUTPUT:Z:SP.DRVL", Monitor);

/* Power supply write tolerance */
PV(double, output_psu_tolerance, "{P}OUTPUT:PSU_WRITE_TOLERANCE", Monitor);

/* Tolerance of (actual-setpoint) for field to be considered stable */
PV(double, tolerance, "{P}TOLERANCE", Monitor);

/* Statuses for feedback to OPI etc */
PV(string, statemachine_state, "{P}STATEMACHINE:STATE", NoMon);
PV(int, statemachine_activity, "{P}STATEMACHINE:ACTIVITY", NoMon);
PV(double, statemachine_measured_loop_time, "{P}STATEMACHINE:LOOP_TIME", NoMon); /* msec */
PV(double, statemachine_measured_read_time, "{P}STATEMACHINE:READ_TIME", NoMon); /* msec */
PV(double, statemachine_measured_write_time, "{P}STATEMACHINE:WRITE_TIME", NoMon); /* msec */
PV(double, statemachine_measured_check_time, "{P}STATEMACHINE:CHECK_TIME", NoMon); /* msec */
PV(double, loop_delay, "{P}STATEMACHINE:LOOP_DELAY", Monitor); /* msec */
PV(double, read_timeout, "{P}STATEMACHINE:READ_TIMEOUT", Monitor); /* sec */
PV(double, write_timeout, "{P}STATEMACHINE:WRITE_TIMEOUT", Monitor); /* sec */
PV(double, post_meas_delay, "{P}STATEMACHINE:POST_MEAS_DELAY", Monitor); /* sec */

PV(int, status, "{P}STATUS", NoMon);
PV(int, at_setpoint, "{P}AT_SETPOINT", NoMon);

/* Whether new readings are available from the magnetometer */
PV(int, readings_ready, "{P}READINGS_READY", Monitor);
PV(int, readings_ready_set, "{P}READINGS_READY:SP", NoMon);

/* Trigger the magnetometer to take new readings */
PV(int, trigger_readings, "{P}TRIGGER_READINGS", NoMon);

/* Whether the controller is in auto-feedback mode */
PV(int, auto_feedback_enabled, "{P}AUTOFEEDBACK", Monitor);

/* Overall system feedback factor */
PV(double, feedback, "{P}FEEDBACK", Monitor);

/* Statemachine debugging - e.g. logging of every state entry. Very verbose. */
PV(int, debug, "{P}DEBUG", Monitor);
