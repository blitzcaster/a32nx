#include "FlightDataRecorderConverter.h"

using namespace std;

void FlightDataRecorderConverter::writeHeader(ofstream& out, const string& delimiter) {
  out << "time" << delimiter;
  out << "sim.raw.time.dt" << delimiter;
  out << "sim.raw.time.simulation_time" << delimiter;
  out << "sim.raw.data.nz_g" << delimiter;
  out << "sim.raw.data.Theta_deg" << delimiter;
  out << "sim.raw.data.Phi_deg" << delimiter;
  out << "sim.raw.data.q_rad_s" << delimiter;
  out << "sim.raw.data.r_rad_s" << delimiter;
  out << "sim.raw.data.p_rad_s" << delimiter;
  out << "sim.raw.data.q_dot_rad_s2" << delimiter;
  out << "sim.raw.data.r_dot_rad_s2" << delimiter;
  out << "sim.raw.data.p_dot_rad_s2" << delimiter;
  out << "sim.raw.data.eta_pos" << delimiter;
  out << "sim.raw.data.eta_trim_deg" << delimiter;
  out << "sim.raw.data.xi_pos" << delimiter;
  out << "sim.raw.data.zeta_pos" << delimiter;
  out << "sim.raw.data.zeta_trim_pos" << delimiter;
  out << "sim.raw.data.alpha_deg" << delimiter;
  out << "sim.raw.data.beta_deg" << delimiter;
  out << "sim.raw.data.beta_dot_deg_s" << delimiter;
  out << "sim.raw.data.V_ias_kn" << delimiter;
  out << "sim.raw.data.V_tas_kn" << delimiter;
  out << "sim.raw.data.V_mach" << delimiter;
  out << "sim.raw.data.H_ft" << delimiter;
  out << "sim.raw.data.H_ind_ft" << delimiter;
  out << "sim.raw.data.H_radio_ft" << delimiter;
  out << "sim.raw.data.CG_percent_MAC" << delimiter;
  out << "sim.raw.data.total_weight_kg" << delimiter;
  out << "sim.raw.data.gear_animation_pos_0" << delimiter;
  out << "sim.raw.data.gear_animation_pos_1" << delimiter;
  out << "sim.raw.data.gear_animation_pos_2" << delimiter;
  out << "sim.raw.data.flaps_handle_index" << delimiter;
  out << "sim.raw.data.spoilers_left_pos" << delimiter;
  out << "sim.raw.data.spoilers_right_pos" << delimiter;
  out << "sim.raw.data.autopilot_master_on" << delimiter;
  out << "sim.raw.data.slew_on" << delimiter;
  out << "sim.raw.data.pause_on" << delimiter;
  out << "sim.raw.input.delta_eta_pos" << delimiter;
  out << "sim.raw.input.delta_xi_pos" << delimiter;
  out << "sim.raw.input.delta_zeta_pos" << delimiter;
  out << "sim.raw.output.eta_pos" << delimiter;
  out << "sim.raw.output.eta_trim_deg" << delimiter;
  out << "sim.raw.output.eta_trim_deg_should_write" << delimiter;
  out << "sim.raw.output.xi_pos" << delimiter;
  out << "sim.raw.output.zeta_pos" << delimiter;
  out << "sim.raw.output.zeta_trim_pos" << delimiter;
  out << "sim.time.dt" << delimiter;
  out << "sim.time.simulation_time" << delimiter;
  out << "sim.time.monotonic_time" << delimiter;
  out << "sim.data.nz_g" << delimiter;
  out << "sim.data.Theta_deg" << delimiter;
  out << "sim.data.Phi_deg" << delimiter;
  out << "sim.data.q_deg_s" << delimiter;
  out << "sim.data.r_deg_s" << delimiter;
  out << "sim.data.p_deg_s" << delimiter;
  out << "sim.data.qk_deg_s" << delimiter;
  out << "sim.data.rk_deg_s" << delimiter;
  out << "sim.data.pk_deg_s" << delimiter;
  out << "sim.data.qk_dot_deg_s2" << delimiter;
  out << "sim.data.rk_dot_deg_s2" << delimiter;
  out << "sim.data.pk_dot_deg_s2" << delimiter;
  out << "sim.data.eta_deg" << delimiter;
  out << "sim.data.eta_trim_deg" << delimiter;
  out << "sim.data.xi_deg" << delimiter;
  out << "sim.data.zeta_deg" << delimiter;
  out << "sim.data.zeta_trim_deg" << delimiter;
  out << "sim.data.alpha_deg" << delimiter;
  out << "sim.data.beta_deg" << delimiter;
  out << "sim.data.beta_dot_deg_s" << delimiter;
  out << "sim.data.V_ias_kn" << delimiter;
  out << "sim.data.V_tas_kn" << delimiter;
  out << "sim.data.V_mach" << delimiter;
  out << "sim.data.H_ft" << delimiter;
  out << "sim.data.H_ind_ft" << delimiter;
  out << "sim.data.H_radio_ft" << delimiter;
  out << "sim.data.CG_percent_MAC" << delimiter;
  out << "sim.data.total_weight_kg" << delimiter;
  out << "sim.data.gear_strut_compression_0" << delimiter;
  out << "sim.data.gear_strut_compression_1" << delimiter;
  out << "sim.data.gear_strut_compression_2" << delimiter;
  out << "sim.data.flaps_handle_index" << delimiter;
  out << "sim.data.spoilers_left_pos" << delimiter;
  out << "sim.data.spoilers_right_pos" << delimiter;
  out << "sim.data.autopilot_master_on" << delimiter;
  out << "sim.data.slew_on" << delimiter;
  out << "sim.data.pause_on" << delimiter;
  out << "sim.data_computed.on_ground" << delimiter;
  out << "sim.data_computed.tracking_mode_on" << delimiter;
  out << "sim.input.delta_eta_pos" << delimiter;
  out << "sim.input.delta_xi_pos" << delimiter;
  out << "sim.input.delta_zeta_pos" << delimiter;
  out << "pitch.data_computed.delta_eta_deg" << delimiter;
  out << "pitch.data_computed.in_flight" << delimiter;
  out << "pitch.data_computed.in_flare" << delimiter;
  out << "pitch.data_computed.in_flight_gain" << delimiter;
  out << "pitch.data_computed.nz_limit_up_g" << delimiter;
  out << "pitch.data_computed.nz_limit_lo_g" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_should_freeze" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_reset" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_reset_deg" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_should_write" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_rate_limit_up_deg_s" << delimiter;
  out << "pitch.data_computed.eta_trim_deg_rate_limit_lo_deg_s" << delimiter;
  out << "pitch.data_computed.flare_Theta_deg" << delimiter;
  out << "pitch.data_computed.flare_Theta_c_deg" << delimiter;
  out << "pitch.data_computed.flare_Theta_c_rate_deg_s" << delimiter;
  out << "pitch.law_normal.nz_c_g" << delimiter;
  out << "pitch.law_normal.Cstar_g" << delimiter;
  out << "pitch.law_normal.eta_dot_deg_s" << delimiter;
  out << "pitch.vote.eta_dot_deg_s" << delimiter;
  out << "pitch.integrated.eta_deg" << delimiter;
  out << "pitch.output.eta_deg" << delimiter;
  out << "pitch.output.eta_trim_deg" << delimiter;
  out << "roll.data_computed.delta_xi_deg" << delimiter;
  out << "roll.data_computed.delta_zeta_deg" << delimiter;
  out << "roll.data_computed.in_flight" << delimiter;
  out << "roll.data_computed.in_flight_gain" << delimiter;
  out << "roll.law_normal.pk_c_deg_s" << delimiter;
  out << "roll.law_normal.Phi_c_deg" << delimiter;
  out << "roll.law_normal.xi_deg" << delimiter;
  out << "roll.law_normal.zeta_deg" << delimiter;
  out << "roll.output.xi_deg" << delimiter;
  out << "roll.output.zeta_deg";
  out << endl;
}

void FlightDataRecorderConverter::writeStruct(ofstream& out, const string& delimiter, const fbw_output& data) {
  out << data.sim.time.monotonic_time << delimiter;
  out << data.sim.raw.time.dt << delimiter;
  out << data.sim.raw.time.simulation_time << delimiter;
  out << data.sim.raw.data.nz_g << delimiter;
  out << data.sim.raw.data.Theta_deg << delimiter;
  out << data.sim.raw.data.Phi_deg << delimiter;
  out << data.sim.raw.data.q_rad_s << delimiter;
  out << data.sim.raw.data.r_rad_s << delimiter;
  out << data.sim.raw.data.p_rad_s << delimiter;
  out << data.sim.raw.data.q_dot_rad_s2 << delimiter;
  out << data.sim.raw.data.r_dot_rad_s2 << delimiter;
  out << data.sim.raw.data.p_dot_rad_s2 << delimiter;
  out << data.sim.raw.data.eta_pos << delimiter;
  out << data.sim.raw.data.eta_trim_deg << delimiter;
  out << data.sim.raw.data.xi_pos << delimiter;
  out << data.sim.raw.data.zeta_pos << delimiter;
  out << data.sim.raw.data.zeta_trim_pos << delimiter;
  out << data.sim.raw.data.alpha_deg << delimiter;
  out << data.sim.raw.data.beta_deg << delimiter;
  out << data.sim.raw.data.beta_dot_deg_s << delimiter;
  out << data.sim.raw.data.V_ias_kn << delimiter;
  out << data.sim.raw.data.V_tas_kn << delimiter;
  out << data.sim.raw.data.V_mach << delimiter;
  out << data.sim.raw.data.H_ft << delimiter;
  out << data.sim.raw.data.H_ind_ft << delimiter;
  out << data.sim.raw.data.H_radio_ft << delimiter;
  out << data.sim.raw.data.CG_percent_MAC << delimiter;
  out << data.sim.raw.data.total_weight_kg << delimiter;
  out << data.sim.raw.data.gear_animation_pos_0 << delimiter;
  out << data.sim.raw.data.gear_animation_pos_1 << delimiter;
  out << data.sim.raw.data.gear_animation_pos_2 << delimiter;
  out << data.sim.raw.data.flaps_handle_index << delimiter;
  out << data.sim.raw.data.spoilers_left_pos << delimiter;
  out << data.sim.raw.data.spoilers_right_pos << delimiter;
  out << data.sim.raw.data.autopilot_master_on << delimiter;
  out << data.sim.raw.data.slew_on << delimiter;
  out << data.sim.raw.data.pause_on << delimiter;
  out << data.sim.raw.input.delta_eta_pos << delimiter;
  out << data.sim.raw.input.delta_xi_pos << delimiter;
  out << data.sim.raw.input.delta_zeta_pos << delimiter;
  out << data.sim.raw.output.eta_pos << delimiter;
  out << data.sim.raw.output.eta_trim_deg << delimiter;
  out << data.sim.raw.output.eta_trim_deg_should_write << delimiter;
  out << data.sim.raw.output.xi_pos << delimiter;
  out << data.sim.raw.output.zeta_pos << delimiter;
  out << data.sim.raw.output.zeta_trim_pos << delimiter;
  out << data.sim.time.dt << delimiter;
  out << data.sim.time.simulation_time << delimiter;
  out << data.sim.time.monotonic_time << delimiter;
  out << data.sim.data.nz_g << delimiter;
  out << data.sim.data.Theta_deg << delimiter;
  out << data.sim.data.Phi_deg << delimiter;
  out << data.sim.data.q_deg_s << delimiter;
  out << data.sim.data.r_deg_s << delimiter;
  out << data.sim.data.p_deg_s << delimiter;
  out << data.sim.data.qk_deg_s << delimiter;
  out << data.sim.data.rk_deg_s << delimiter;
  out << data.sim.data.pk_deg_s << delimiter;
  out << data.sim.data.qk_dot_deg_s2 << delimiter;
  out << data.sim.data.rk_dot_deg_s2 << delimiter;
  out << data.sim.data.pk_dot_deg_s2 << delimiter;
  out << data.sim.data.eta_deg << delimiter;
  out << data.sim.data.eta_trim_deg << delimiter;
  out << data.sim.data.xi_deg << delimiter;
  out << data.sim.data.zeta_deg << delimiter;
  out << data.sim.data.zeta_trim_deg << delimiter;
  out << data.sim.data.alpha_deg << delimiter;
  out << data.sim.data.beta_deg << delimiter;
  out << data.sim.data.beta_dot_deg_s << delimiter;
  out << data.sim.data.V_ias_kn << delimiter;
  out << data.sim.data.V_tas_kn << delimiter;
  out << data.sim.data.V_mach << delimiter;
  out << data.sim.data.H_ft << delimiter;
  out << data.sim.data.H_ind_ft << delimiter;
  out << data.sim.data.H_radio_ft << delimiter;
  out << data.sim.data.CG_percent_MAC << delimiter;
  out << data.sim.data.total_weight_kg << delimiter;
  out << data.sim.data.gear_strut_compression_0 << delimiter;
  out << data.sim.data.gear_strut_compression_1 << delimiter;
  out << data.sim.data.gear_strut_compression_2 << delimiter;
  out << data.sim.data.flaps_handle_index << delimiter;
  out << data.sim.data.spoilers_left_pos << delimiter;
  out << data.sim.data.spoilers_right_pos << delimiter;
  out << data.sim.data.autopilot_master_on << delimiter;
  out << data.sim.data.slew_on << delimiter;
  out << data.sim.data.pause_on << delimiter;
  out << data.sim.data_computed.on_ground << delimiter;
  out << data.sim.data_computed.tracking_mode_on << delimiter;
  out << data.sim.input.delta_eta_pos << delimiter;
  out << data.sim.input.delta_xi_pos << delimiter;
  out << data.sim.input.delta_zeta_pos << delimiter;
  out << data.pitch.data_computed.delta_eta_deg << delimiter;
  out << data.pitch.data_computed.in_flight << delimiter;
  out << data.pitch.data_computed.in_flare << delimiter;
  out << data.pitch.data_computed.in_flight_gain << delimiter;
  out << data.pitch.data_computed.nz_limit_up_g << delimiter;
  out << data.pitch.data_computed.nz_limit_lo_g << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_should_freeze << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_reset << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_reset_deg << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_should_write << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_rate_limit_up_deg_s << delimiter;
  out << data.pitch.data_computed.eta_trim_deg_rate_limit_lo_deg_s << delimiter;
  out << data.pitch.data_computed.flare_Theta_deg << delimiter;
  out << data.pitch.data_computed.flare_Theta_c_deg << delimiter;
  out << data.pitch.data_computed.flare_Theta_c_rate_deg_s << delimiter;
  out << data.pitch.law_normal.nz_c_g << delimiter;
  out << data.pitch.law_normal.Cstar_g << delimiter;
  out << data.pitch.law_normal.eta_dot_deg_s << delimiter;
  out << data.pitch.vote.eta_dot_deg_s << delimiter;
  out << data.pitch.integrated.eta_deg << delimiter;
  out << data.pitch.output.eta_deg << delimiter;
  out << data.pitch.output.eta_trim_deg << delimiter;
  out << data.roll.data_computed.delta_xi_deg << delimiter;
  out << data.roll.data_computed.delta_zeta_deg << delimiter;
  out << data.roll.data_computed.in_flight << delimiter;
  out << data.roll.data_computed.in_flight_gain << delimiter;
  out << data.roll.law_normal.pk_c_deg_s << delimiter;
  out << data.roll.law_normal.Phi_c_deg << delimiter;
  out << data.roll.law_normal.xi_deg << delimiter;
  out << data.roll.law_normal.zeta_deg << delimiter;
  out << data.roll.output.xi_deg << delimiter;
  out << data.roll.output.zeta_deg;
  out << endl;
}