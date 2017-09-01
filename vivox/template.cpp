#include <cstdio>
#include <wtypes.h>

int WINAPI destroy_evt() { printf("destroy_evt"); return 0; }
int WINAPI destroy_req() { printf("destroy_req"); return 0; }
int WINAPI destroy_resp() { printf("destroy_resp"); return 0; }
int WINAPI opus_decode() { printf("opus_decode"); return 0; }
int WINAPI opus_decode_float() { printf("opus_decode_float"); return 0; }
int WINAPI opus_decoder_create() { printf("opus_decoder_create"); return 0; }
int WINAPI opus_decoder_ctl() { printf("opus_decoder_ctl"); return 0; }
int WINAPI opus_decoder_destroy() { printf("opus_decoder_destroy"); return 0; }
int WINAPI opus_decoder_get_nb_samples() { printf("opus_decoder_get_nb_samples"); return 0; }
int WINAPI opus_decoder_get_size() { printf("opus_decoder_get_size"); return 0; }
int WINAPI opus_decoder_init() { printf("opus_decoder_init"); return 0; }
int WINAPI opus_encode() { printf("opus_encode"); return 0; }
int WINAPI opus_encode_float() { printf("opus_encode_float"); return 0; }
int WINAPI opus_encoder_create() { printf("opus_encoder_create"); return 0; }
int WINAPI opus_encoder_ctl() { printf("opus_encoder_ctl"); return 0; }
int WINAPI opus_encoder_destroy() { printf("opus_encoder_destroy"); return 0; }
int WINAPI opus_encoder_get_size() { printf("opus_encoder_get_size"); return 0; }
int WINAPI opus_encoder_init() { printf("opus_encoder_init"); return 0; }
int WINAPI opus_get_version_string() { printf("opus_get_version_string"); return 0; }
int WINAPI opus_multistream_packet_pad() { printf("opus_multistream_packet_pad"); return 0; }
int WINAPI opus_multistream_packet_unpad() { printf("opus_multistream_packet_unpad"); return 0; }
int WINAPI opus_packet_get_bandwidth() { printf("opus_packet_get_bandwidth"); return 0; }
int WINAPI opus_packet_get_nb_channels() { printf("opus_packet_get_nb_channels"); return 0; }
int WINAPI opus_packet_get_nb_frames() { printf("opus_packet_get_nb_frames"); return 0; }
int WINAPI opus_packet_get_nb_samples() { printf("opus_packet_get_nb_samples"); return 0; }
int WINAPI opus_packet_get_samples_per_frame() { printf("opus_packet_get_samples_per_frame"); return 0; }
int WINAPI opus_packet_pad() { printf("opus_packet_pad"); return 0; }
int WINAPI opus_packet_parse() { printf("opus_packet_parse"); return 0; }
int WINAPI opus_packet_unpad() { printf("opus_packet_unpad"); return 0; }
int WINAPI opus_pcm_soft_clip() { printf("opus_pcm_soft_clip"); return 0; }
int WINAPI opus_repacketizer_cat() { printf("opus_repacketizer_cat"); return 0; }
int WINAPI opus_repacketizer_create() { printf("opus_repacketizer_create"); return 0; }
int WINAPI opus_repacketizer_destroy() { printf("opus_repacketizer_destroy"); return 0; }
int WINAPI opus_repacketizer_get_nb_frames() { printf("opus_repacketizer_get_nb_frames"); return 0; }
int WINAPI opus_repacketizer_get_size() { printf("opus_repacketizer_get_size"); return 0; }
int WINAPI opus_repacketizer_init() { printf("opus_repacketizer_init"); return 0; }
int WINAPI opus_repacketizer_out() { printf("opus_repacketizer_out"); return 0; }
int WINAPI opus_repacketizer_out_range() { printf("opus_repacketizer_out_range"); return 0; }
int WINAPI opus_strerror() { printf("opus_strerror"); return 0; }
int WINAPI vx_account_create() { printf("vx_account_create"); return 0; }
int WINAPI vx_account_free() { printf("vx_account_free"); return 0; }
int WINAPI vx_alloc_sdk_handle() { printf("vx_alloc_sdk_handle"); return 0; }
int WINAPI vx_alloc_spurs_jobqueue_handle() { printf("vx_alloc_spurs_jobqueue_handle"); return 0; }
int WINAPI vx_allocate() { printf("vx_allocate"); return 0; }
int WINAPI vx_allocate_aligned() { printf("vx_allocate_aligned"); return 0; }
int WINAPI vx_apply_font_to_file() { printf("vx_apply_font_to_file"); return 0; }
int WINAPI vx_apply_font_to_file_return_energy_ratio() { printf("vx_apply_font_to_file_return_energy_ratio"); return 0; }
int WINAPI vx_apply_font_to_vxz_file_return_energy_ratio() { printf("vx_apply_font_to_vxz_file_return_energy_ratio"); return 0; }
int WINAPI vx_audio_frame_free() { printf("vx_audio_frame_free"); return 0; }
int WINAPI vx_auto_accept_rule_create() { printf("vx_auto_accept_rule_create"); return 0; }
int WINAPI vx_auto_accept_rule_free() { printf("vx_auto_accept_rule_free"); return 0; }
int WINAPI vx_auto_accept_rules_create() { printf("vx_auto_accept_rules_create"); return 0; }
int WINAPI vx_auto_accept_rules_free() { printf("vx_auto_accept_rules_free"); return 0; }
int WINAPI vx_block_rule_create() { printf("vx_block_rule_create"); return 0; }
int WINAPI vx_block_rule_free() { printf("vx_block_rule_free"); return 0; }
int WINAPI vx_block_rules_create() { printf("vx_block_rules_create"); return 0; }
int WINAPI vx_block_rules_free() { printf("vx_block_rules_free"); return 0; }
int WINAPI vx_buddy_create() { printf("vx_buddy_create"); return 0; }
int WINAPI vx_buddy_free() { printf("vx_buddy_free"); return 0; }
int WINAPI vx_buddy_list_create() { printf("vx_buddy_list_create"); return 0; }
int WINAPI vx_buddy_list_free() { printf("vx_buddy_list_free"); return 0; }
int WINAPI vx_calloc() { printf("vx_calloc"); return 0; }
int WINAPI vx_channel_create() { printf("vx_channel_create"); return 0; }
int WINAPI vx_channel_favorite_create() { printf("vx_channel_favorite_create"); return 0; }
int WINAPI vx_channel_favorite_free() { printf("vx_channel_favorite_free"); return 0; }
int WINAPI vx_channel_favorite_group_create() { printf("vx_channel_favorite_group_create"); return 0; }
int WINAPI vx_channel_favorite_group_free() { printf("vx_channel_favorite_group_free"); return 0; }
int WINAPI vx_channel_favorite_group_list_create() { printf("vx_channel_favorite_group_list_create"); return 0; }
int WINAPI vx_channel_favorite_group_list_free() { printf("vx_channel_favorite_group_list_free"); return 0; }
int WINAPI vx_channel_favorite_list_create() { printf("vx_channel_favorite_list_create"); return 0; }
int WINAPI vx_channel_favorite_list_free() { printf("vx_channel_favorite_list_free"); return 0; }
int WINAPI vx_channel_free() { printf("vx_channel_free"); return 0; }
int WINAPI vx_channel_list_create() { printf("vx_channel_list_create"); return 0; }
int WINAPI vx_channel_list_free() { printf("vx_channel_list_free"); return 0; }
int WINAPI vx_clear_stats() { printf("vx_clear_stats"); return 0; }
int WINAPI vx_connectivity_test_result_create() { printf("vx_connectivity_test_result_create"); return 0; }
int WINAPI vx_connectivity_test_result_free() { printf("vx_connectivity_test_result_free"); return 0; }
int WINAPI vx_connectivity_test_results_create() { printf("vx_connectivity_test_results_create"); return 0; }
int WINAPI vx_connectivity_test_results_free() { printf("vx_connectivity_test_results_free"); return 0; }
int WINAPI vx_cookie_create() { printf("vx_cookie_create"); return 0; }
int WINAPI vx_cookie_free() { printf("vx_cookie_free"); return 0; }
int WINAPI vx_copy_audioBuffer() { printf("vx_copy_audioBuffer"); return 0; }
int WINAPI vx_crash_test() { printf("vx_crash_test"); return 0; }
int WINAPI vx_create_account() { printf("vx_create_account"); return 0; }
int WINAPI vx_create_resp() { printf("vx_create_resp"); return 0; }
int WINAPI vx_debug_generate_token() { printf("vx_debug_generate_token"); return 0; }
int WINAPI vx_delete_crash_dump() { printf("vx_delete_crash_dump"); return 0; }
int WINAPI vx_destroy_message() { printf("vx_destroy_message"); return 0; }
int WINAPI vx_device_create() { printf("vx_device_create"); return 0; }
int WINAPI vx_device_free() { printf("vx_device_free"); return 0; }
int WINAPI vx_devices_create() { printf("vx_devices_create"); return 0; }
int WINAPI vx_devices_free() { printf("vx_devices_free"); return 0; }
int WINAPI vx_event_to_xml() { printf("vx_event_to_xml"); return 0; }
int WINAPI vx_evt_account_login_state_change_free() { printf("vx_evt_account_login_state_change_free"); return 0; }
int WINAPI vx_evt_aux_audio_properties_create() { printf("vx_evt_aux_audio_properties_create"); return 0; }
int WINAPI vx_evt_aux_audio_properties_free() { printf("vx_evt_aux_audio_properties_free"); return 0; }
int WINAPI vx_evt_buddy_and_group_list_changed_create() { printf("vx_evt_buddy_and_group_list_changed_create"); return 0; }
int WINAPI vx_evt_buddy_and_group_list_changed_free() { printf("vx_evt_buddy_and_group_list_changed_free"); return 0; }
int WINAPI vx_evt_buddy_changed_create() { printf("vx_evt_buddy_changed_create"); return 0; }
int WINAPI vx_evt_buddy_changed_free() { printf("vx_evt_buddy_changed_free"); return 0; }
int WINAPI vx_evt_buddy_group_changed_create() { printf("vx_evt_buddy_group_changed_create"); return 0; }
int WINAPI vx_evt_buddy_group_changed_free() { printf("vx_evt_buddy_group_changed_free"); return 0; }
int WINAPI vx_evt_buddy_presence_create() { printf("vx_evt_buddy_presence_create"); return 0; }
int WINAPI vx_evt_buddy_presence_free() { printf("vx_evt_buddy_presence_free"); return 0; }
int WINAPI vx_evt_idle_state_changed_create() { printf("vx_evt_idle_state_changed_create"); return 0; }
int WINAPI vx_evt_idle_state_changed_free() { printf("vx_evt_idle_state_changed_free"); return 0; }
int WINAPI vx_evt_keyboard_mouse_create() { printf("vx_evt_keyboard_mouse_create"); return 0; }
int WINAPI vx_evt_keyboard_mouse_free() { printf("vx_evt_keyboard_mouse_free"); return 0; }
int WINAPI vx_evt_media_completion_create() { printf("vx_evt_media_completion_create"); return 0; }
int WINAPI vx_evt_media_completion_free() { printf("vx_evt_media_completion_free"); return 0; }
int WINAPI vx_evt_media_stream_updated_create() { printf("vx_evt_media_stream_updated_create"); return 0; }
int WINAPI vx_evt_media_stream_updated_free() { printf("vx_evt_media_stream_updated_free"); return 0; }
int WINAPI vx_evt_message_create() { printf("vx_evt_message_create"); return 0; }
int WINAPI vx_evt_message_free() { printf("vx_evt_message_free"); return 0; }
int WINAPI vx_evt_participant_added_create() { printf("vx_evt_participant_added_create"); return 0; }
int WINAPI vx_evt_participant_added_free() { printf("vx_evt_participant_added_free"); return 0; }
int WINAPI vx_evt_participant_removed_create() { printf("vx_evt_participant_removed_create"); return 0; }
int WINAPI vx_evt_participant_removed_free() { printf("vx_evt_participant_removed_free"); return 0; }
int WINAPI vx_evt_participant_updated_create() { printf("vx_evt_participant_updated_create"); return 0; }
int WINAPI vx_evt_participant_updated_free() { printf("vx_evt_participant_updated_free"); return 0; }
int WINAPI vx_evt_server_app_data_create() { printf("vx_evt_server_app_data_create"); return 0; }
int WINAPI vx_evt_server_app_data_free() { printf("vx_evt_server_app_data_free"); return 0; }
int WINAPI vx_evt_session_added_create() { printf("vx_evt_session_added_create"); return 0; }
int WINAPI vx_evt_session_added_free() { printf("vx_evt_session_added_free"); return 0; }
int WINAPI vx_evt_session_notification_create() { printf("vx_evt_session_notification_create"); return 0; }
int WINAPI vx_evt_session_notification_free() { printf("vx_evt_session_notification_free"); return 0; }
int WINAPI vx_evt_session_removed_create() { printf("vx_evt_session_removed_create"); return 0; }
int WINAPI vx_evt_session_removed_free() { printf("vx_evt_session_removed_free"); return 0; }
int WINAPI vx_evt_session_updated_create() { printf("vx_evt_session_updated_create"); return 0; }
int WINAPI vx_evt_session_updated_free() { printf("vx_evt_session_updated_free"); return 0; }
int WINAPI vx_evt_sessiongroup_added_create() { printf("vx_evt_sessiongroup_added_create"); return 0; }
int WINAPI vx_evt_sessiongroup_added_free() { printf("vx_evt_sessiongroup_added_free"); return 0; }
int WINAPI vx_evt_sessiongroup_playback_frame_played_captured_create() { printf("vx_evt_sessiongroup_playback_frame_played_captured_create"); return 0; }
int WINAPI vx_evt_sessiongroup_playback_frame_played_free() { printf("vx_evt_sessiongroup_playback_frame_played_free"); return 0; }
int WINAPI vx_evt_sessiongroup_removed_create() { printf("vx_evt_sessiongroup_removed_create"); return 0; }
int WINAPI vx_evt_sessiongroup_removed_free() { printf("vx_evt_sessiongroup_removed_free"); return 0; }
int WINAPI vx_evt_sessiongroup_updated_create() { printf("vx_evt_sessiongroup_updated_create"); return 0; }
int WINAPI vx_evt_sessiongroup_updated_free() { printf("vx_evt_sessiongroup_updated_free"); return 0; }
int WINAPI vx_evt_subscription_create() { printf("vx_evt_subscription_create"); return 0; }
int WINAPI vx_evt_subscription_free() { printf("vx_evt_subscription_free"); return 0; }
int WINAPI vx_evt_text_stream_updated_create() { printf("vx_evt_text_stream_updated_create"); return 0; }
int WINAPI vx_evt_text_stream_updated_free() { printf("vx_evt_text_stream_updated_free"); return 0; }
int WINAPI vx_evt_user_app_data_create() { printf("vx_evt_user_app_data_create"); return 0; }
int WINAPI vx_evt_user_app_data_free() { printf("vx_evt_user_app_data_free"); return 0; }
int WINAPI vx_evt_voice_service_connection_state_changed_create() { printf("vx_evt_voice_service_connection_state_changed_create"); return 0; }
int WINAPI vx_export_audioBuffer_to_wav_file() { printf("vx_export_audioBuffer_to_wav_file"); return 0; }
int WINAPI vx_free() { printf("vx_free"); return 0; }
int WINAPI vx_free_audioBuffer() { printf("vx_free_audioBuffer"); return 0; }
int WINAPI vx_free_sdk_handle() { printf("vx_free_sdk_handle"); return 0; }
int WINAPI vx_free_spurs_jobqueue_handle() { printf("vx_free_spurs_jobqueue_handle"); return 0; }
int WINAPI vx_free_voiceprocessor_frame() { printf("vx_free_voiceprocessor_frame"); return 0; }
int WINAPI vx_get_audioBuffer_duration() { printf("vx_get_audioBuffer_duration"); return 0; }
int WINAPI vx_get_crash_dump_count() { printf("vx_get_crash_dump_count"); return 0; }
int WINAPI vx_get_crash_dump_generation() { printf("vx_get_crash_dump_generation"); return 0; }
int WINAPI vx_get_crash_dump_timestamp() { printf("vx_get_crash_dump_timestamp"); return 0; }
int WINAPI vx_get_current_interval_count() { printf("vx_get_current_interval_count"); return 0; }
int WINAPI vx_get_default_config() { printf("vx_get_default_config"); return 0; }
int WINAPI vx_get_default_config3() { printf("vx_get_default_config3"); return 0; }
int WINAPI vx_get_error_string() { printf("vx_get_error_string"); return 0; }
int WINAPI vx_get_event_type_string() { printf("vx_get_event_type_string"); return 0; }
int WINAPI vx_get_int_var() { printf("vx_get_int_var"); return 0; }
int WINAPI vx_get_message() { printf("vx_get_message"); return 0; }
int WINAPI vx_get_message_type() { printf("vx_get_message_type"); return 0; }
int WINAPI vx_get_report_issue_document() { printf("vx_get_report_issue_document"); return 0; }
int WINAPI vx_get_request_type_string() { printf("vx_get_request_type_string"); return 0; }
int WINAPI vx_get_response_for() { printf("vx_get_response_for"); return 0; }
int WINAPI vx_get_response_type_string() { printf("vx_get_response_type_string"); return 0; }
int WINAPI vx_get_sdk_version_info() { printf("vx_get_sdk_version_info"); return 0; }
int WINAPI vx_get_stats() { printf("vx_get_stats"); return 0; }
int WINAPI vx_get_system_stats() { printf("vx_get_system_stats"); return 0; }
int WINAPI vx_get_time_ms() { printf("vx_get_time_ms"); return 0; }
int WINAPI vx_group_create() { printf("vx_group_create"); return 0; }
int WINAPI vx_group_free() { printf("vx_group_free"); return 0; }
int WINAPI vx_group_list_create() { printf("vx_group_list_create"); return 0; }
int WINAPI vx_group_list_free() { printf("vx_group_list_free"); return 0; }
int WINAPI vx_initialize() { printf("vx_initialize"); return 0; }
int WINAPI vx_initialize2() { printf("vx_initialize2"); return 0; }
int WINAPI vx_initialize3() { printf("vx_initialize3"); return 0; }
int WINAPI vx_issue_request() { printf("vx_issue_request"); return 0; }
int WINAPI vx_issue_request2() { printf("vx_issue_request2"); return 0; }
int WINAPI vx_issue_request3() { printf("vx_issue_request3"); return 0; }
int WINAPI vx_name_value_pair_create() { printf("vx_name_value_pair_create"); return 0; }
int WINAPI vx_name_value_pair_free() { printf("vx_name_value_pair_free"); return 0; }
int WINAPI vx_name_value_pairs_create() { printf("vx_name_value_pairs_create"); return 0; }
int WINAPI vx_name_value_pairs_free() { printf("vx_name_value_pairs_free"); return 0; }
int WINAPI vx_on_application_exit() { printf("vx_on_application_exit"); return 0; }
int WINAPI vx_participant_create() { printf("vx_participant_create"); return 0; }
int WINAPI vx_participant_free() { printf("vx_participant_free"); return 0; }
int WINAPI vx_participant_list_create() { printf("vx_participant_list_create"); return 0; }
int WINAPI vx_participant_list_free() { printf("vx_participant_list_free"); return 0; }
int WINAPI vx_print_env() { printf("vx_print_env"); return 0; }
int WINAPI vx_queue_job_async() { printf("vx_queue_job_async"); return 0; }
int WINAPI vx_queue_job_sync() { printf("vx_queue_job_sync"); return 0; }
int WINAPI vx_read_crash_dump() { printf("vx_read_crash_dump"); return 0; }
int WINAPI vx_reallocate() { printf("vx_reallocate"); return 0; }
int WINAPI vx_register_all_requests() { printf("vx_register_all_requests"); return 0; }
int WINAPI vx_register_logging_initialization() { printf("vx_register_logging_initialization"); return 0; }
int WINAPI vx_register_message_notification_handler() { printf("vx_register_message_notification_handler"); return 0; }
int WINAPI vx_render_audio_from_this_thread() { printf("vx_render_audio_from_this_thread"); return 0; }
int WINAPI vx_replace_audio_data() { printf("vx_replace_audio_data"); return 0; }
int WINAPI vx_req_account_anonymous_login_create() { printf("vx_req_account_anonymous_login_create"); return 0; }
int WINAPI vx_req_account_authtoken_login_create() { printf("vx_req_account_authtoken_login_create"); return 0; }
int WINAPI vx_req_account_buddy_delete_create() { printf("vx_req_account_buddy_delete_create"); return 0; }
int WINAPI vx_req_account_buddy_search_create() { printf("vx_req_account_buddy_search_create"); return 0; }
int WINAPI vx_req_account_buddy_set_create() { printf("vx_req_account_buddy_set_create"); return 0; }
int WINAPI vx_req_account_buddygroup_delete_create() { printf("vx_req_account_buddygroup_delete_create"); return 0; }
int WINAPI vx_req_account_buddygroup_set_create() { printf("vx_req_account_buddygroup_set_create"); return 0; }
int WINAPI vx_req_account_channel_add_acl_create() { printf("vx_req_account_channel_add_acl_create"); return 0; }
int WINAPI vx_req_account_channel_add_moderator_create() { printf("vx_req_account_channel_add_moderator_create"); return 0; }
int WINAPI vx_req_account_channel_change_owner_create() { printf("vx_req_account_channel_change_owner_create"); return 0; }
int WINAPI vx_req_account_channel_create_create() { printf("vx_req_account_channel_create_create"); return 0; }
int WINAPI vx_req_account_channel_delete_create() { printf("vx_req_account_channel_delete_create"); return 0; }
int WINAPI vx_req_account_channel_favorite_delete_create() { printf("vx_req_account_channel_favorite_delete_create"); return 0; }
int WINAPI vx_req_account_channel_favorite_group_delete_create() { printf("vx_req_account_channel_favorite_group_delete_create"); return 0; }
int WINAPI vx_req_account_channel_favorite_group_set_create() { printf("vx_req_account_channel_favorite_group_set_create"); return 0; }
int WINAPI vx_req_account_channel_favorite_set_create() { printf("vx_req_account_channel_favorite_set_create"); return 0; }
int WINAPI vx_req_account_channel_favorites_get_list_create() { printf("vx_req_account_channel_favorites_get_list_create"); return 0; }
int WINAPI vx_req_account_channel_get_acl_create() { printf("vx_req_account_channel_get_acl_create"); return 0; }
int WINAPI vx_req_account_channel_get_info_create() { printf("vx_req_account_channel_get_info_create"); return 0; }
int WINAPI vx_req_account_channel_get_moderators_create() { printf("vx_req_account_channel_get_moderators_create"); return 0; }
int WINAPI vx_req_account_channel_get_participants_create() { printf("vx_req_account_channel_get_participants_create"); return 0; }
int WINAPI vx_req_account_channel_remove_acl_create() { printf("vx_req_account_channel_remove_acl_create"); return 0; }
int WINAPI vx_req_account_channel_remove_moderator_create() { printf("vx_req_account_channel_remove_moderator_create"); return 0; }
int WINAPI vx_req_account_channel_search_create() { printf("vx_req_account_channel_search_create"); return 0; }
int WINAPI vx_req_account_channel_update_create() { printf("vx_req_account_channel_update_create"); return 0; }
int WINAPI vx_req_account_control_communications_create() { printf("vx_req_account_control_communications_create"); return 0; }
int WINAPI vx_req_account_create_auto_accept_rule_create() { printf("vx_req_account_create_auto_accept_rule_create"); return 0; }
int WINAPI vx_req_account_create_block_rule_create() { printf("vx_req_account_create_block_rule_create"); return 0; }
int WINAPI vx_req_account_delete_auto_accept_rule_create() { printf("vx_req_account_delete_auto_accept_rule_create"); return 0; }
int WINAPI vx_req_account_delete_block_rule_create() { printf("vx_req_account_delete_block_rule_create"); return 0; }
int WINAPI vx_req_account_get_account_create() { printf("vx_req_account_get_account_create"); return 0; }
int WINAPI vx_req_account_get_session_fonts_create() { printf("vx_req_account_get_session_fonts_create"); return 0; }
int WINAPI vx_req_account_get_template_fonts_create() { printf("vx_req_account_get_template_fonts_create"); return 0; }
int WINAPI vx_req_account_list_auto_accept_rules_create() { printf("vx_req_account_list_auto_accept_rules_create"); return 0; }
int WINAPI vx_req_account_list_block_rules_create() { printf("vx_req_account_list_block_rules_create"); return 0; }
int WINAPI vx_req_account_list_buddies_and_groups_create() { printf("vx_req_account_list_buddies_and_groups_create"); return 0; }
int WINAPI vx_req_account_login_create() { printf("vx_req_account_login_create"); return 0; }
int WINAPI vx_req_account_logout_create() { printf("vx_req_account_logout_create"); return 0; }
int WINAPI vx_req_account_post_crash_dump_create() { printf("vx_req_account_post_crash_dump_create"); return 0; }
int WINAPI vx_req_account_send_message_create() { printf("vx_req_account_send_message_create"); return 0; }
int WINAPI vx_req_account_send_sms_create() { printf("vx_req_account_send_sms_create"); return 0; }
int WINAPI vx_req_account_send_subscription_reply_create() { printf("vx_req_account_send_subscription_reply_create"); return 0; }
int WINAPI vx_req_account_send_user_app_data_create() { printf("vx_req_account_send_user_app_data_create"); return 0; }
int WINAPI vx_req_account_set_login_properties_create() { printf("vx_req_account_set_login_properties_create"); return 0; }
int WINAPI vx_req_account_set_presence_create() { printf("vx_req_account_set_presence_create"); return 0; }
int WINAPI vx_req_account_update_account_create() { printf("vx_req_account_update_account_create"); return 0; }
int WINAPI vx_req_account_web_call_create() { printf("vx_req_account_web_call_create"); return 0; }
int WINAPI vx_req_aux_capture_audio_start_create() { printf("vx_req_aux_capture_audio_start_create"); return 0; }
int WINAPI vx_req_aux_capture_audio_stop_create() { printf("vx_req_aux_capture_audio_stop_create"); return 0; }
int WINAPI vx_req_aux_connectivity_info_create() { printf("vx_req_aux_connectivity_info_create"); return 0; }
int WINAPI vx_req_aux_create_account_create() { printf("vx_req_aux_create_account_create"); return 0; }
int WINAPI vx_req_aux_deactivate_account_create() { printf("vx_req_aux_deactivate_account_create"); return 0; }
int WINAPI vx_req_aux_diagnostic_state_dump_create() { printf("vx_req_aux_diagnostic_state_dump_create"); return 0; }
int WINAPI vx_req_aux_get_capture_devices_create() { printf("vx_req_aux_get_capture_devices_create"); return 0; }
int WINAPI vx_req_aux_get_mic_level_create() { printf("vx_req_aux_get_mic_level_create"); return 0; }
int WINAPI vx_req_aux_get_render_devices_create() { printf("vx_req_aux_get_render_devices_create"); return 0; }
int WINAPI vx_req_aux_get_speaker_level_create() { printf("vx_req_aux_get_speaker_level_create"); return 0; }
int WINAPI vx_req_aux_get_vad_properties_create() { printf("vx_req_aux_get_vad_properties_create"); return 0; }
int WINAPI vx_req_aux_global_monitor_keyboard_mouse_create() { printf("vx_req_aux_global_monitor_keyboard_mouse_create"); return 0; }
int WINAPI vx_req_aux_notify_application_state_change_create() { printf("vx_req_aux_notify_application_state_change_create"); return 0; }
int WINAPI vx_req_aux_play_audio_buffer_create() { printf("vx_req_aux_play_audio_buffer_create"); return 0; }
int WINAPI vx_req_aux_reactivate_account_create() { printf("vx_req_aux_reactivate_account_create"); return 0; }
int WINAPI vx_req_aux_render_audio_modify_create() { printf("vx_req_aux_render_audio_modify_create"); return 0; }
int WINAPI vx_req_aux_render_audio_start_create() { printf("vx_req_aux_render_audio_start_create"); return 0; }
int WINAPI vx_req_aux_render_audio_stop_create() { printf("vx_req_aux_render_audio_stop_create"); return 0; }
int WINAPI vx_req_aux_reset_password_create() { printf("vx_req_aux_reset_password_create"); return 0; }
int WINAPI vx_req_aux_set_capture_device_create() { printf("vx_req_aux_set_capture_device_create"); return 0; }
int WINAPI vx_req_aux_set_idle_timeout_create() { printf("vx_req_aux_set_idle_timeout_create"); return 0; }
int WINAPI vx_req_aux_set_mic_level_create() { printf("vx_req_aux_set_mic_level_create"); return 0; }
int WINAPI vx_req_aux_set_render_device_create() { printf("vx_req_aux_set_render_device_create"); return 0; }
int WINAPI vx_req_aux_set_speaker_level_create() { printf("vx_req_aux_set_speaker_level_create"); return 0; }
int WINAPI vx_req_aux_set_vad_properties_create() { printf("vx_req_aux_set_vad_properties_create"); return 0; }
int WINAPI vx_req_aux_start_buffer_capture_create() { printf("vx_req_aux_start_buffer_capture_create"); return 0; }
int WINAPI vx_req_channel_ban_user_create() { printf("vx_req_channel_ban_user_create"); return 0; }
int WINAPI vx_req_channel_get_banned_users_create() { printf("vx_req_channel_get_banned_users_create"); return 0; }
int WINAPI vx_req_channel_kick_user_create() { printf("vx_req_channel_kick_user_create"); return 0; }
int WINAPI vx_req_channel_mute_all_users_create() { printf("vx_req_channel_mute_all_users_create"); return 0; }
int WINAPI vx_req_channel_mute_user_create() { printf("vx_req_channel_mute_user_create"); return 0; }
int WINAPI vx_req_channel_set_lock_mode_create() { printf("vx_req_channel_set_lock_mode_create"); return 0; }
int WINAPI vx_req_connector_create_create() { printf("vx_req_connector_create_create"); return 0; }
int WINAPI vx_req_connector_get_local_audio_info_create() { printf("vx_req_connector_get_local_audio_info_create"); return 0; }
int WINAPI vx_req_connector_initiate_shutdown_create() { printf("vx_req_connector_initiate_shutdown_create"); return 0; }
int WINAPI vx_req_connector_mute_local_mic_create() { printf("vx_req_connector_mute_local_mic_create"); return 0; }
int WINAPI vx_req_connector_mute_local_speaker_create() { printf("vx_req_connector_mute_local_speaker_create"); return 0; }
int WINAPI vx_req_connector_set_local_mic_volume_create() { printf("vx_req_connector_set_local_mic_volume_create"); return 0; }
int WINAPI vx_req_connector_set_local_speaker_volume_create() { printf("vx_req_connector_set_local_speaker_volume_create"); return 0; }
int WINAPI vx_req_session_channel_invite_user_create() { printf("vx_req_session_channel_invite_user_create"); return 0; }
int WINAPI vx_req_session_create_create() { printf("vx_req_session_create_create"); return 0; }
int WINAPI vx_req_session_media_connect_create() { printf("vx_req_session_media_connect_create"); return 0; }
int WINAPI vx_req_session_media_disconnect_create() { printf("vx_req_session_media_disconnect_create"); return 0; }
int WINAPI vx_req_session_mute_local_speaker_create() { printf("vx_req_session_mute_local_speaker_create"); return 0; }
int WINAPI vx_req_session_send_dtmf_create() { printf("vx_req_session_send_dtmf_create"); return 0; }
int WINAPI vx_req_session_send_message_create() { printf("vx_req_session_send_message_create"); return 0; }
int WINAPI vx_req_session_send_notification_create() { printf("vx_req_session_send_notification_create"); return 0; }
int WINAPI vx_req_session_set_3d_position_create() { printf("vx_req_session_set_3d_position_create"); return 0; }
int WINAPI vx_req_session_set_local_speaker_volume_create() { printf("vx_req_session_set_local_speaker_volume_create"); return 0; }
int WINAPI vx_req_session_set_participant_mute_for_me_create() { printf("vx_req_session_set_participant_mute_for_me_create"); return 0; }
int WINAPI vx_req_session_set_participant_volume_for_me_create() { printf("vx_req_session_set_participant_volume_for_me_create"); return 0; }
int WINAPI vx_req_session_set_voice_font_create() { printf("vx_req_session_set_voice_font_create"); return 0; }
int WINAPI vx_req_session_terminate_create() { printf("vx_req_session_terminate_create"); return 0; }
int WINAPI vx_req_session_text_connect_create() { printf("vx_req_session_text_connect_create"); return 0; }
int WINAPI vx_req_session_text_disconnect_create() { printf("vx_req_session_text_disconnect_create"); return 0; }
int WINAPI vx_req_sessiongroup_add_session_create() { printf("vx_req_sessiongroup_add_session_create"); return 0; }
int WINAPI vx_req_sessiongroup_control_audio_injection_create() { printf("vx_req_sessiongroup_control_audio_injection_create"); return 0; }
int WINAPI vx_req_sessiongroup_create_create() { printf("vx_req_sessiongroup_create_create"); return 0; }
int WINAPI vx_req_sessiongroup_get_stats_create() { printf("vx_req_sessiongroup_get_stats_create"); return 0; }
int WINAPI vx_req_sessiongroup_remove_session_create() { printf("vx_req_sessiongroup_remove_session_create"); return 0; }
int WINAPI vx_req_sessiongroup_reset_focus_create() { printf("vx_req_sessiongroup_reset_focus_create"); return 0; }
int WINAPI vx_req_sessiongroup_set_focus_create() { printf("vx_req_sessiongroup_set_focus_create"); return 0; }
int WINAPI vx_req_sessiongroup_set_session_3d_position_create() { printf("vx_req_sessiongroup_set_session_3d_position_create"); return 0; }
int WINAPI vx_req_sessiongroup_set_tx_all_sessions_create() { printf("vx_req_sessiongroup_set_tx_all_sessions_create"); return 0; }
int WINAPI vx_req_sessiongroup_set_tx_no_session_create() { printf("vx_req_sessiongroup_set_tx_no_session_create"); return 0; }
int WINAPI vx_req_sessiongroup_set_tx_session_create() { printf("vx_req_sessiongroup_set_tx_session_create"); return 0; }
int WINAPI vx_req_sessiongroup_terminate_create() { printf("vx_req_sessiongroup_terminate_create"); return 0; }
int WINAPI vx_req_sessiongroup_unset_focus_create() { printf("vx_req_sessiongroup_unset_focus_create"); return 0; }
int WINAPI vx_request_to_xml() { printf("vx_request_to_xml"); return 0; }
int WINAPI vx_resp_account_anonymous_login_free() { printf("vx_resp_account_anonymous_login_free"); return 0; }
int WINAPI vx_resp_account_authtoken_login_free() { printf("vx_resp_account_authtoken_login_free"); return 0; }
int WINAPI vx_resp_account_buddy_delete_free() { printf("vx_resp_account_buddy_delete_free"); return 0; }
int WINAPI vx_resp_account_buddy_search_free() { printf("vx_resp_account_buddy_search_free"); return 0; }
int WINAPI vx_resp_account_buddy_set_free() { printf("vx_resp_account_buddy_set_free"); return 0; }
int WINAPI vx_resp_account_buddygroup_delete_free() { printf("vx_resp_account_buddygroup_delete_free"); return 0; }
int WINAPI vx_resp_account_buddygroup_set_free() { printf("vx_resp_account_buddygroup_set_free"); return 0; }
int WINAPI vx_resp_account_channel_add_acl_free() { printf("vx_resp_account_channel_add_acl_free"); return 0; }
int WINAPI vx_resp_account_channel_add_moderator_free() { printf("vx_resp_account_channel_add_moderator_free"); return 0; }
int WINAPI vx_resp_account_channel_change_owner_free() { printf("vx_resp_account_channel_change_owner_free"); return 0; }
int WINAPI vx_resp_account_channel_create_free() { printf("vx_resp_account_channel_create_free"); return 0; }
int WINAPI vx_resp_account_channel_delete_free() { printf("vx_resp_account_channel_delete_free"); return 0; }
int WINAPI vx_resp_account_channel_favorite_delete_free() { printf("vx_resp_account_channel_favorite_delete_free"); return 0; }
int WINAPI vx_resp_account_channel_favorite_group_delete_free() { printf("vx_resp_account_channel_favorite_group_delete_free"); return 0; }
int WINAPI vx_resp_account_channel_favorite_group_set_free() { printf("vx_resp_account_channel_favorite_group_set_free"); return 0; }
int WINAPI vx_resp_account_channel_favorite_set_free() { printf("vx_resp_account_channel_favorite_set_free"); return 0; }
int WINAPI vx_resp_account_channel_favorites_get_list_free() { printf("vx_resp_account_channel_favorites_get_list_free"); return 0; }
int WINAPI vx_resp_account_channel_get_acl_free() { printf("vx_resp_account_channel_get_acl_free"); return 0; }
int WINAPI vx_resp_account_channel_get_info_free() { printf("vx_resp_account_channel_get_info_free"); return 0; }
int WINAPI vx_resp_account_channel_get_moderators_free() { printf("vx_resp_account_channel_get_moderators_free"); return 0; }
int WINAPI vx_resp_account_channel_get_participants_free() { printf("vx_resp_account_channel_get_participants_free"); return 0; }
int WINAPI vx_resp_account_channel_remove_acl_free() { printf("vx_resp_account_channel_remove_acl_free"); return 0; }
int WINAPI vx_resp_account_channel_remove_moderator_free() { printf("vx_resp_account_channel_remove_moderator_free"); return 0; }
int WINAPI vx_resp_account_channel_search_free() { printf("vx_resp_account_channel_search_free"); return 0; }
int WINAPI vx_resp_account_channel_update_free() { printf("vx_resp_account_channel_update_free"); return 0; }
int WINAPI vx_resp_account_create_auto_accept_rule_free() { printf("vx_resp_account_create_auto_accept_rule_free"); return 0; }
int WINAPI vx_resp_account_create_block_rule_free() { printf("vx_resp_account_create_block_rule_free"); return 0; }
int WINAPI vx_resp_account_delete_auto_accept_rule_free() { printf("vx_resp_account_delete_auto_accept_rule_free"); return 0; }
int WINAPI vx_resp_account_delete_block_rule_free() { printf("vx_resp_account_delete_block_rule_free"); return 0; }
int WINAPI vx_resp_account_get_account_free() { printf("vx_resp_account_get_account_free"); return 0; }
int WINAPI vx_resp_account_get_session_fonts_free() { printf("vx_resp_account_get_session_fonts_free"); return 0; }
int WINAPI vx_resp_account_get_template_fonts_free() { printf("vx_resp_account_get_template_fonts_free"); return 0; }
int WINAPI vx_resp_account_list_auto_accept_rules_free() { printf("vx_resp_account_list_auto_accept_rules_free"); return 0; }
int WINAPI vx_resp_account_list_block_rules_free() { printf("vx_resp_account_list_block_rules_free"); return 0; }
int WINAPI vx_resp_account_list_buddies_and_groups_free() { printf("vx_resp_account_list_buddies_and_groups_free"); return 0; }
int WINAPI vx_resp_account_login_free() { printf("vx_resp_account_login_free"); return 0; }
int WINAPI vx_resp_account_logout_free() { printf("vx_resp_account_logout_free"); return 0; }
int WINAPI vx_resp_account_post_crash_dump_free() { printf("vx_resp_account_post_crash_dump_free"); return 0; }
int WINAPI vx_resp_account_send_sms_free() { printf("vx_resp_account_send_sms_free"); return 0; }
int WINAPI vx_resp_account_send_subscription_reply_free() { printf("vx_resp_account_send_subscription_reply_free"); return 0; }
int WINAPI vx_resp_account_send_user_app_data_free() { printf("vx_resp_account_send_user_app_data_free"); return 0; }
int WINAPI vx_resp_account_set_login_properties_free() { printf("vx_resp_account_set_login_properties_free"); return 0; }
int WINAPI vx_resp_account_set_presence_free() { printf("vx_resp_account_set_presence_free"); return 0; }
int WINAPI vx_resp_account_update_account_free() { printf("vx_resp_account_update_account_free"); return 0; }
int WINAPI vx_resp_aux_capture_audio_start_free() { printf("vx_resp_aux_capture_audio_start_free"); return 0; }
int WINAPI vx_resp_aux_capture_audio_stop_free() { printf("vx_resp_aux_capture_audio_stop_free"); return 0; }
int WINAPI vx_resp_aux_connectivity_info_free() { printf("vx_resp_aux_connectivity_info_free"); return 0; }
int WINAPI vx_resp_aux_create_account_free() { printf("vx_resp_aux_create_account_free"); return 0; }
int WINAPI vx_resp_aux_deactivate_account_free() { printf("vx_resp_aux_deactivate_account_free"); return 0; }
int WINAPI vx_resp_aux_diagnostic_state_dump_free() { printf("vx_resp_aux_diagnostic_state_dump_free"); return 0; }
int WINAPI vx_resp_aux_get_capture_devices_free() { printf("vx_resp_aux_get_capture_devices_free"); return 0; }
int WINAPI vx_resp_aux_get_mic_level_free() { printf("vx_resp_aux_get_mic_level_free"); return 0; }
int WINAPI vx_resp_aux_get_render_devices_free() { printf("vx_resp_aux_get_render_devices_free"); return 0; }
int WINAPI vx_resp_aux_get_speaker_level_free() { printf("vx_resp_aux_get_speaker_level_free"); return 0; }
int WINAPI vx_resp_aux_get_vad_properties_free() { printf("vx_resp_aux_get_vad_properties_free"); return 0; }
int WINAPI vx_resp_aux_global_monitor_keyboard_mouse_free() { printf("vx_resp_aux_global_monitor_keyboard_mouse_free"); return 0; }
int WINAPI vx_resp_aux_play_audio_buffer_free() { printf("vx_resp_aux_play_audio_buffer_free"); return 0; }
int WINAPI vx_resp_aux_reactivate_account_free() { printf("vx_resp_aux_reactivate_account_free"); return 0; }
int WINAPI vx_resp_aux_render_audio_modify_free() { printf("vx_resp_aux_render_audio_modify_free"); return 0; }
int WINAPI vx_resp_aux_render_audio_start_free() { printf("vx_resp_aux_render_audio_start_free"); return 0; }
int WINAPI vx_resp_aux_render_audio_stop_free() { printf("vx_resp_aux_render_audio_stop_free"); return 0; }
int WINAPI vx_resp_aux_reset_password_free() { printf("vx_resp_aux_reset_password_free"); return 0; }
int WINAPI vx_resp_aux_set_capture_device_free() { printf("vx_resp_aux_set_capture_device_free"); return 0; }
int WINAPI vx_resp_aux_set_idle_timeout_free() { printf("vx_resp_aux_set_idle_timeout_free"); return 0; }
int WINAPI vx_resp_aux_set_mic_level_free() { printf("vx_resp_aux_set_mic_level_free"); return 0; }
int WINAPI vx_resp_aux_set_render_device_free() { printf("vx_resp_aux_set_render_device_free"); return 0; }
int WINAPI vx_resp_aux_set_speaker_level_free() { printf("vx_resp_aux_set_speaker_level_free"); return 0; }
int WINAPI vx_resp_aux_set_vad_properties_free() { printf("vx_resp_aux_set_vad_properties_free"); return 0; }
int WINAPI vx_resp_aux_start_buffer_capture_free() { printf("vx_resp_aux_start_buffer_capture_free"); return 0; }
int WINAPI vx_resp_channel_ban_user_free() { printf("vx_resp_channel_ban_user_free"); return 0; }
int WINAPI vx_resp_channel_get_banned_users_free() { printf("vx_resp_channel_get_banned_users_free"); return 0; }
int WINAPI vx_resp_channel_kick_user_free() { printf("vx_resp_channel_kick_user_free"); return 0; }
int WINAPI vx_resp_channel_mute_all_users_free() { printf("vx_resp_channel_mute_all_users_free"); return 0; }
int WINAPI vx_resp_channel_mute_user_free() { printf("vx_resp_channel_mute_user_free"); return 0; }
int WINAPI vx_resp_channel_set_lock_mode_free() { printf("vx_resp_channel_set_lock_mode_free"); return 0; }
int WINAPI vx_resp_connector_create_free() { printf("vx_resp_connector_create_free"); return 0; }
int WINAPI vx_resp_connector_get_local_audio_info_free() { printf("vx_resp_connector_get_local_audio_info_free"); return 0; }
int WINAPI vx_resp_connector_initiate_shutdown_free() { printf("vx_resp_connector_initiate_shutdown_free"); return 0; }
int WINAPI vx_resp_connector_mute_local_mic_free() { printf("vx_resp_connector_mute_local_mic_free"); return 0; }
int WINAPI vx_resp_connector_mute_local_speaker_free() { printf("vx_resp_connector_mute_local_speaker_free"); return 0; }
int WINAPI vx_resp_connector_set_local_mic_volume_free() { printf("vx_resp_connector_set_local_mic_volume_free"); return 0; }
int WINAPI vx_resp_connector_set_local_speaker_volume_free() { printf("vx_resp_connector_set_local_speaker_volume_free"); return 0; }
int WINAPI vx_resp_session_channel_invite_user_free() { printf("vx_resp_session_channel_invite_user_free"); return 0; }
int WINAPI vx_resp_session_create_free() { printf("vx_resp_session_create_free"); return 0; }
int WINAPI vx_resp_session_media_connect_free() { printf("vx_resp_session_media_connect_free"); return 0; }
int WINAPI vx_resp_session_media_disconnect_free() { printf("vx_resp_session_media_disconnect_free"); return 0; }
int WINAPI vx_resp_session_mute_local_speaker_free() { printf("vx_resp_session_mute_local_speaker_free"); return 0; }
int WINAPI vx_resp_session_send_dtmf_free() { printf("vx_resp_session_send_dtmf_free"); return 0; }
int WINAPI vx_resp_session_send_message_free() { printf("vx_resp_session_send_message_free"); return 0; }
int WINAPI vx_resp_session_send_notification_free() { printf("vx_resp_session_send_notification_free"); return 0; }
int WINAPI vx_resp_session_set_3d_position_free() { printf("vx_resp_session_set_3d_position_free"); return 0; }
int WINAPI vx_resp_session_set_local_speaker_volume_free() { printf("vx_resp_session_set_local_speaker_volume_free"); return 0; }
int WINAPI vx_resp_session_set_participant_mute_for_me_free() { printf("vx_resp_session_set_participant_mute_for_me_free"); return 0; }
int WINAPI vx_resp_session_set_participant_volume_for_me_free() { printf("vx_resp_session_set_participant_volume_for_me_free"); return 0; }
int WINAPI vx_resp_session_set_voice_font_free() { printf("vx_resp_session_set_voice_font_free"); return 0; }
int WINAPI vx_resp_session_terminate_free() { printf("vx_resp_session_terminate_free"); return 0; }
int WINAPI vx_resp_session_text_connect_free() { printf("vx_resp_session_text_connect_free"); return 0; }
int WINAPI vx_resp_session_text_disconnect_free() { printf("vx_resp_session_text_disconnect_free"); return 0; }
int WINAPI vx_resp_sessiongroup_add_session_free() { printf("vx_resp_sessiongroup_add_session_free"); return 0; }
int WINAPI vx_resp_sessiongroup_create_free() { printf("vx_resp_sessiongroup_create_free"); return 0; }
int WINAPI vx_resp_sessiongroup_get_stats_free() { printf("vx_resp_sessiongroup_get_stats_free"); return 0; }
int WINAPI vx_resp_sessiongroup_remove_session_free() { printf("vx_resp_sessiongroup_remove_session_free"); return 0; }
int WINAPI vx_resp_sessiongroup_reset_focus_free() { printf("vx_resp_sessiongroup_reset_focus_free"); return 0; }
int WINAPI vx_resp_sessiongroup_set_focus_free() { printf("vx_resp_sessiongroup_set_focus_free"); return 0; }
int WINAPI vx_resp_sessiongroup_set_session_3d_position_free() { printf("vx_resp_sessiongroup_set_session_3d_position_free"); return 0; }
int WINAPI vx_resp_sessiongroup_set_tx_all_sessions_free() { printf("vx_resp_sessiongroup_set_tx_all_sessions_free"); return 0; }
int WINAPI vx_resp_sessiongroup_set_tx_no_session_free() { printf("vx_resp_sessiongroup_set_tx_no_session_free"); return 0; }
int WINAPI vx_resp_sessiongroup_set_tx_session_free() { printf("vx_resp_sessiongroup_set_tx_session_free"); return 0; }
int WINAPI vx_resp_sessiongroup_terminate_free() { printf("vx_resp_sessiongroup_terminate_free"); return 0; }
int WINAPI vx_resp_sessiongroup_unset_focus_free() { printf("vx_resp_sessiongroup_unset_focus_free"); return 0; }
int WINAPI vx_response_to_xml() { printf("vx_response_to_xml"); return 0; }
int WINAPI vx_safe_invoke() { printf("vx_safe_invoke"); return 0; }
int WINAPI vx_set_advanced_agc_enabled() { printf("vx_set_advanced_agc_enabled"); return 0; }
int WINAPI vx_set_aec_enabled() { printf("vx_set_aec_enabled"); return 0; }
int WINAPI vx_set_agc_enabled() { printf("vx_set_agc_enabled"); return 0; }
int WINAPI vx_set_application_crash_data() { printf("vx_set_application_crash_data"); return 0; }
int WINAPI vx_set_capture_derumbler_enabled() { printf("vx_set_capture_derumbler_enabled"); return 0; }
int WINAPI vx_set_crash_dump_generation_enabled() { printf("vx_set_crash_dump_generation_enabled"); return 0; }
int WINAPI vx_set_int_var() { printf("vx_set_int_var"); return 0; }
int WINAPI vx_set_out_of_process_server_address() { printf("vx_set_out_of_process_server_address"); return 0; }
int WINAPI vx_set_vad_enabled() { printf("vx_set_vad_enabled"); return 0; }
int WINAPI vx_set_vp_callback() { printf("vx_set_vp_callback"); return 0; }
int WINAPI vx_state_account_create() { printf("vx_state_account_create"); return 0; }
int WINAPI vx_state_account_free() { printf("vx_state_account_free"); return 0; }
int WINAPI vx_state_account_list_create() { printf("vx_state_account_list_create"); return 0; }
int WINAPI vx_state_account_list_free() { printf("vx_state_account_list_free"); return 0; }
int WINAPI vx_state_buddy_contact_create() { printf("vx_state_buddy_contact_create"); return 0; }
int WINAPI vx_state_buddy_contact_free() { printf("vx_state_buddy_contact_free"); return 0; }
int WINAPI vx_state_buddy_contact_list_create() { printf("vx_state_buddy_contact_list_create"); return 0; }
int WINAPI vx_state_buddy_contact_list_free() { printf("vx_state_buddy_contact_list_free"); return 0; }
int WINAPI vx_state_buddy_create() { printf("vx_state_buddy_create"); return 0; }
int WINAPI vx_state_buddy_free() { printf("vx_state_buddy_free"); return 0; }
int WINAPI vx_state_buddy_group_create() { printf("vx_state_buddy_group_create"); return 0; }
int WINAPI vx_state_buddy_group_free() { printf("vx_state_buddy_group_free"); return 0; }
int WINAPI vx_state_buddy_group_list_create() { printf("vx_state_buddy_group_list_create"); return 0; }
int WINAPI vx_state_buddy_group_list_free() { printf("vx_state_buddy_group_list_free"); return 0; }
int WINAPI vx_state_buddy_list_create() { printf("vx_state_buddy_list_create"); return 0; }
int WINAPI vx_state_buddy_list_free() { printf("vx_state_buddy_list_free"); return 0; }
int WINAPI vx_state_connector_create() { printf("vx_state_connector_create"); return 0; }
int WINAPI vx_state_connector_free() { printf("vx_state_connector_free"); return 0; }
int WINAPI vx_state_connector_list_create() { printf("vx_state_connector_list_create"); return 0; }
int WINAPI vx_state_connector_list_free() { printf("vx_state_connector_list_free"); return 0; }
int WINAPI vx_state_participant_create() { printf("vx_state_participant_create"); return 0; }
int WINAPI vx_state_participant_free() { printf("vx_state_participant_free"); return 0; }
int WINAPI vx_state_participant_list_create() { printf("vx_state_participant_list_create"); return 0; }
int WINAPI vx_state_participant_list_free() { printf("vx_state_participant_list_free"); return 0; }
int WINAPI vx_state_session_create() { printf("vx_state_session_create"); return 0; }
int WINAPI vx_state_session_free() { printf("vx_state_session_free"); return 0; }
int WINAPI vx_state_session_list_create() { printf("vx_state_session_list_create"); return 0; }
int WINAPI vx_state_session_list_free() { printf("vx_state_session_list_free"); return 0; }
int WINAPI vx_state_sessiongroup_create() { printf("vx_state_sessiongroup_create"); return 0; }
int WINAPI vx_state_sessiongroup_free() { printf("vx_state_sessiongroup_free"); return 0; }
int WINAPI vx_state_sessiongroup_list_create() { printf("vx_state_sessiongroup_list_create"); return 0; }
int WINAPI vx_state_sessiongroup_list_free() { printf("vx_state_sessiongroup_list_free"); return 0; }
int WINAPI vx_stop_render_audio_from_this_thread() { printf("vx_stop_render_audio_from_this_thread"); return 0; }
int WINAPI vx_strdup() { printf("vx_strdup"); return 0; }
int WINAPI vx_string_list_create() { printf("vx_string_list_create"); return 0; }
int WINAPI vx_string_list_free() { printf("vx_string_list_free"); return 0; }
int WINAPI vx_unallocate() { printf("vx_unallocate"); return 0; }
int WINAPI vx_unallocate_aligned() { printf("vx_unallocate_aligned"); return 0; }
int WINAPI vx_uninitialize() { printf("vx_uninitialize"); return 0; }
int WINAPI vx_unregister_logging_handler() { printf("vx_unregister_logging_handler"); return 0; }
int WINAPI vx_unregister_message_notification_handler() { printf("vx_unregister_message_notification_handler"); return 0; }
int WINAPI vx_user_channel_create() { printf("vx_user_channel_create"); return 0; }
int WINAPI vx_user_channel_free() { printf("vx_user_channel_free"); return 0; }
int WINAPI vx_user_channels_create() { printf("vx_user_channels_create"); return 0; }
int WINAPI vx_user_channels_free() { printf("vx_user_channels_free"); return 0; }
int WINAPI vx_virtual_capture_device_create() { printf("vx_virtual_capture_device_create"); return 0; }
int WINAPI vx_virtual_capture_device_create2() { printf("vx_virtual_capture_device_create2"); return 0; }
int WINAPI vx_virtual_capture_device_destroy() { printf("vx_virtual_capture_device_destroy"); return 0; }
int WINAPI vx_virtual_capture_device_get_active_media() { printf("vx_virtual_capture_device_get_active_media"); return 0; }
int WINAPI vx_virtual_capture_device_queue_frame() { printf("vx_virtual_capture_device_queue_frame"); return 0; }
int WINAPI vx_virtual_render_device_create() { printf("vx_virtual_render_device_create"); return 0; }
int WINAPI vx_virtual_render_device_dequeue_frame_2() { printf("vx_virtual_render_device_dequeue_frame_2"); return 0; }
int WINAPI vx_virtual_render_device_destroy() { printf("vx_virtual_render_device_destroy"); return 0; }
int WINAPI vx_voice_font_create() { printf("vx_voice_font_create"); return 0; }
int WINAPI vx_voice_font_free() { printf("vx_voice_font_free"); return 0; }
int WINAPI vx_voice_font_list_create() { printf("vx_voice_font_list_create"); return 0; }
int WINAPI vx_voice_font_list_free() { printf("vx_voice_font_list_free"); return 0; }
int WINAPI vx_wait_for_message() { printf("vx_wait_for_message"); return 0; }
int WINAPI vx_xml_to_event() { printf("vx_xml_to_event"); return 0; }
int WINAPI vx_xml_to_request() { printf("vx_xml_to_request"); return 0; }
int WINAPI vx_xml_to_response() { printf("vx_xml_to_response"); return 0; }
int WINAPI vxa_apcd_create() { printf("vxa_apcd_create"); return 0; }
int WINAPI vxa_apcd_destroy() { printf("vxa_apcd_destroy"); return 0; }
int WINAPI vxa_aprd_create() { printf("vxa_aprd_create"); return 0; }
int WINAPI vxa_aprd_destroy() { printf("vxa_aprd_destroy"); return 0; }
#include "HookUtil.h"
#include <map>
#include <string>

extern CHAR* g_OriginalModulePath;
extern HMODULE g_OriginalModule = 0;
extern std::map<std::string, DetourHookInfo> g_ExportFunctionHooks = std::map<std::string, DetourHookInfo>();
static void HookAllExports(HMODULE hCurrentModule)
{
	g_OriginalModule = LoadLibraryEx(g_OriginalModulePath, NULL, 0);
	if (g_OriginalModule == 0)
		return;
	g_ExportFunctionHooks["destroy_evt"] = DetourHookInfo(hCurrentModule, "destroy_evt", g_OriginalModule);
	g_ExportFunctionHooks["destroy_req"] = DetourHookInfo(hCurrentModule, "destroy_req", g_OriginalModule);
	g_ExportFunctionHooks["destroy_resp"] = DetourHookInfo(hCurrentModule, "destroy_resp", g_OriginalModule);
	g_ExportFunctionHooks["opus_decode"] = DetourHookInfo(hCurrentModule, "opus_decode", g_OriginalModule);
	g_ExportFunctionHooks["opus_decode_float"] = DetourHookInfo(hCurrentModule, "opus_decode_float", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_create"] = DetourHookInfo(hCurrentModule, "opus_decoder_create", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_ctl"] = DetourHookInfo(hCurrentModule, "opus_decoder_ctl", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_destroy"] = DetourHookInfo(hCurrentModule, "opus_decoder_destroy", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_get_nb_samples"] = DetourHookInfo(hCurrentModule, "opus_decoder_get_nb_samples", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_get_size"] = DetourHookInfo(hCurrentModule, "opus_decoder_get_size", g_OriginalModule);
	g_ExportFunctionHooks["opus_decoder_init"] = DetourHookInfo(hCurrentModule, "opus_decoder_init", g_OriginalModule);
	g_ExportFunctionHooks["opus_encode"] = DetourHookInfo(hCurrentModule, "opus_encode", g_OriginalModule);
	g_ExportFunctionHooks["opus_encode_float"] = DetourHookInfo(hCurrentModule, "opus_encode_float", g_OriginalModule);
	g_ExportFunctionHooks["opus_encoder_create"] = DetourHookInfo(hCurrentModule, "opus_encoder_create", g_OriginalModule);
	g_ExportFunctionHooks["opus_encoder_ctl"] = DetourHookInfo(hCurrentModule, "opus_encoder_ctl", g_OriginalModule);
	g_ExportFunctionHooks["opus_encoder_destroy"] = DetourHookInfo(hCurrentModule, "opus_encoder_destroy", g_OriginalModule);
	g_ExportFunctionHooks["opus_encoder_get_size"] = DetourHookInfo(hCurrentModule, "opus_encoder_get_size", g_OriginalModule);
	g_ExportFunctionHooks["opus_encoder_init"] = DetourHookInfo(hCurrentModule, "opus_encoder_init", g_OriginalModule);
	g_ExportFunctionHooks["opus_get_version_string"] = DetourHookInfo(hCurrentModule, "opus_get_version_string", g_OriginalModule);
	g_ExportFunctionHooks["opus_multistream_packet_pad"] = DetourHookInfo(hCurrentModule, "opus_multistream_packet_pad", g_OriginalModule);
	g_ExportFunctionHooks["opus_multistream_packet_unpad"] = DetourHookInfo(hCurrentModule, "opus_multistream_packet_unpad", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_get_bandwidth"] = DetourHookInfo(hCurrentModule, "opus_packet_get_bandwidth", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_get_nb_channels"] = DetourHookInfo(hCurrentModule, "opus_packet_get_nb_channels", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_get_nb_frames"] = DetourHookInfo(hCurrentModule, "opus_packet_get_nb_frames", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_get_nb_samples"] = DetourHookInfo(hCurrentModule, "opus_packet_get_nb_samples", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_get_samples_per_frame"] = DetourHookInfo(hCurrentModule, "opus_packet_get_samples_per_frame", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_pad"] = DetourHookInfo(hCurrentModule, "opus_packet_pad", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_parse"] = DetourHookInfo(hCurrentModule, "opus_packet_parse", g_OriginalModule);
	g_ExportFunctionHooks["opus_packet_unpad"] = DetourHookInfo(hCurrentModule, "opus_packet_unpad", g_OriginalModule);
	g_ExportFunctionHooks["opus_pcm_soft_clip"] = DetourHookInfo(hCurrentModule, "opus_pcm_soft_clip", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_cat"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_cat", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_create"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_create", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_destroy"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_destroy", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_get_nb_frames"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_get_nb_frames", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_get_size"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_get_size", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_init"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_init", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_out"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_out", g_OriginalModule);
	g_ExportFunctionHooks["opus_repacketizer_out_range"] = DetourHookInfo(hCurrentModule, "opus_repacketizer_out_range", g_OriginalModule);
	g_ExportFunctionHooks["opus_strerror"] = DetourHookInfo(hCurrentModule, "opus_strerror", g_OriginalModule);
	g_ExportFunctionHooks["vx_account_create"] = DetourHookInfo(hCurrentModule, "vx_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_account_free"] = DetourHookInfo(hCurrentModule, "vx_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_alloc_sdk_handle"] = DetourHookInfo(hCurrentModule, "vx_alloc_sdk_handle", g_OriginalModule);
	g_ExportFunctionHooks["vx_alloc_spurs_jobqueue_handle"] = DetourHookInfo(hCurrentModule, "vx_alloc_spurs_jobqueue_handle", g_OriginalModule);
	g_ExportFunctionHooks["vx_allocate"] = DetourHookInfo(hCurrentModule, "vx_allocate", g_OriginalModule);
	g_ExportFunctionHooks["vx_allocate_aligned"] = DetourHookInfo(hCurrentModule, "vx_allocate_aligned", g_OriginalModule);
	g_ExportFunctionHooks["vx_apply_font_to_file"] = DetourHookInfo(hCurrentModule, "vx_apply_font_to_file", g_OriginalModule);
	g_ExportFunctionHooks["vx_apply_font_to_file_return_energy_ratio"] = DetourHookInfo(hCurrentModule, "vx_apply_font_to_file_return_energy_ratio", g_OriginalModule);
	g_ExportFunctionHooks["vx_apply_font_to_vxz_file_return_energy_ratio"] = DetourHookInfo(hCurrentModule, "vx_apply_font_to_vxz_file_return_energy_ratio", g_OriginalModule);
	g_ExportFunctionHooks["vx_audio_frame_free"] = DetourHookInfo(hCurrentModule, "vx_audio_frame_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_auto_accept_rule_create"] = DetourHookInfo(hCurrentModule, "vx_auto_accept_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_auto_accept_rule_free"] = DetourHookInfo(hCurrentModule, "vx_auto_accept_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_auto_accept_rules_create"] = DetourHookInfo(hCurrentModule, "vx_auto_accept_rules_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_auto_accept_rules_free"] = DetourHookInfo(hCurrentModule, "vx_auto_accept_rules_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_block_rule_create"] = DetourHookInfo(hCurrentModule, "vx_block_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_block_rule_free"] = DetourHookInfo(hCurrentModule, "vx_block_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_block_rules_create"] = DetourHookInfo(hCurrentModule, "vx_block_rules_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_block_rules_free"] = DetourHookInfo(hCurrentModule, "vx_block_rules_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_buddy_create"] = DetourHookInfo(hCurrentModule, "vx_buddy_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_buddy_free"] = DetourHookInfo(hCurrentModule, "vx_buddy_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_buddy_list_create"] = DetourHookInfo(hCurrentModule, "vx_buddy_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_buddy_list_free"] = DetourHookInfo(hCurrentModule, "vx_buddy_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_calloc"] = DetourHookInfo(hCurrentModule, "vx_calloc", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_create"] = DetourHookInfo(hCurrentModule, "vx_channel_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_create"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_free"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_group_create"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_group_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_group_free"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_group_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_group_list_create"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_group_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_group_list_free"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_group_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_list_create"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_favorite_list_free"] = DetourHookInfo(hCurrentModule, "vx_channel_favorite_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_free"] = DetourHookInfo(hCurrentModule, "vx_channel_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_list_create"] = DetourHookInfo(hCurrentModule, "vx_channel_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_channel_list_free"] = DetourHookInfo(hCurrentModule, "vx_channel_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_clear_stats"] = DetourHookInfo(hCurrentModule, "vx_clear_stats", g_OriginalModule);
	g_ExportFunctionHooks["vx_connectivity_test_result_create"] = DetourHookInfo(hCurrentModule, "vx_connectivity_test_result_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_connectivity_test_result_free"] = DetourHookInfo(hCurrentModule, "vx_connectivity_test_result_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_connectivity_test_results_create"] = DetourHookInfo(hCurrentModule, "vx_connectivity_test_results_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_connectivity_test_results_free"] = DetourHookInfo(hCurrentModule, "vx_connectivity_test_results_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_cookie_create"] = DetourHookInfo(hCurrentModule, "vx_cookie_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_cookie_free"] = DetourHookInfo(hCurrentModule, "vx_cookie_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_copy_audioBuffer"] = DetourHookInfo(hCurrentModule, "vx_copy_audioBuffer", g_OriginalModule);
	g_ExportFunctionHooks["vx_crash_test"] = DetourHookInfo(hCurrentModule, "vx_crash_test", g_OriginalModule);
	g_ExportFunctionHooks["vx_create_account"] = DetourHookInfo(hCurrentModule, "vx_create_account", g_OriginalModule);
	g_ExportFunctionHooks["vx_create_resp"] = DetourHookInfo(hCurrentModule, "vx_create_resp", g_OriginalModule);
	g_ExportFunctionHooks["vx_debug_generate_token"] = DetourHookInfo(hCurrentModule, "vx_debug_generate_token", g_OriginalModule);
	g_ExportFunctionHooks["vx_delete_crash_dump"] = DetourHookInfo(hCurrentModule, "vx_delete_crash_dump", g_OriginalModule);
	g_ExportFunctionHooks["vx_destroy_message"] = DetourHookInfo(hCurrentModule, "vx_destroy_message", g_OriginalModule);
	g_ExportFunctionHooks["vx_device_create"] = DetourHookInfo(hCurrentModule, "vx_device_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_device_free"] = DetourHookInfo(hCurrentModule, "vx_device_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_devices_create"] = DetourHookInfo(hCurrentModule, "vx_devices_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_devices_free"] = DetourHookInfo(hCurrentModule, "vx_devices_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_event_to_xml"] = DetourHookInfo(hCurrentModule, "vx_event_to_xml", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_account_login_state_change_free"] = DetourHookInfo(hCurrentModule, "vx_evt_account_login_state_change_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_aux_audio_properties_create"] = DetourHookInfo(hCurrentModule, "vx_evt_aux_audio_properties_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_aux_audio_properties_free"] = DetourHookInfo(hCurrentModule, "vx_evt_aux_audio_properties_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_and_group_list_changed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_and_group_list_changed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_and_group_list_changed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_and_group_list_changed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_changed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_changed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_changed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_changed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_group_changed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_group_changed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_group_changed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_group_changed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_presence_create"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_presence_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_buddy_presence_free"] = DetourHookInfo(hCurrentModule, "vx_evt_buddy_presence_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_idle_state_changed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_idle_state_changed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_idle_state_changed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_idle_state_changed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_keyboard_mouse_create"] = DetourHookInfo(hCurrentModule, "vx_evt_keyboard_mouse_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_keyboard_mouse_free"] = DetourHookInfo(hCurrentModule, "vx_evt_keyboard_mouse_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_media_completion_create"] = DetourHookInfo(hCurrentModule, "vx_evt_media_completion_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_media_completion_free"] = DetourHookInfo(hCurrentModule, "vx_evt_media_completion_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_media_stream_updated_create"] = DetourHookInfo(hCurrentModule, "vx_evt_media_stream_updated_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_media_stream_updated_free"] = DetourHookInfo(hCurrentModule, "vx_evt_media_stream_updated_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_message_create"] = DetourHookInfo(hCurrentModule, "vx_evt_message_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_message_free"] = DetourHookInfo(hCurrentModule, "vx_evt_message_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_added_create"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_added_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_added_free"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_added_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_removed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_removed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_removed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_removed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_updated_create"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_updated_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_participant_updated_free"] = DetourHookInfo(hCurrentModule, "vx_evt_participant_updated_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_server_app_data_create"] = DetourHookInfo(hCurrentModule, "vx_evt_server_app_data_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_server_app_data_free"] = DetourHookInfo(hCurrentModule, "vx_evt_server_app_data_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_added_create"] = DetourHookInfo(hCurrentModule, "vx_evt_session_added_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_added_free"] = DetourHookInfo(hCurrentModule, "vx_evt_session_added_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_notification_create"] = DetourHookInfo(hCurrentModule, "vx_evt_session_notification_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_notification_free"] = DetourHookInfo(hCurrentModule, "vx_evt_session_notification_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_removed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_session_removed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_removed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_session_removed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_updated_create"] = DetourHookInfo(hCurrentModule, "vx_evt_session_updated_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_session_updated_free"] = DetourHookInfo(hCurrentModule, "vx_evt_session_updated_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_added_create"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_added_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_added_free"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_added_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_playback_frame_played_captured_create"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_playback_frame_played_captured_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_playback_frame_played_free"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_playback_frame_played_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_removed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_removed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_removed_free"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_removed_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_updated_create"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_updated_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_sessiongroup_updated_free"] = DetourHookInfo(hCurrentModule, "vx_evt_sessiongroup_updated_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_subscription_create"] = DetourHookInfo(hCurrentModule, "vx_evt_subscription_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_subscription_free"] = DetourHookInfo(hCurrentModule, "vx_evt_subscription_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_text_stream_updated_create"] = DetourHookInfo(hCurrentModule, "vx_evt_text_stream_updated_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_text_stream_updated_free"] = DetourHookInfo(hCurrentModule, "vx_evt_text_stream_updated_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_user_app_data_create"] = DetourHookInfo(hCurrentModule, "vx_evt_user_app_data_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_user_app_data_free"] = DetourHookInfo(hCurrentModule, "vx_evt_user_app_data_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_evt_voice_service_connection_state_changed_create"] = DetourHookInfo(hCurrentModule, "vx_evt_voice_service_connection_state_changed_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_export_audioBuffer_to_wav_file"] = DetourHookInfo(hCurrentModule, "vx_export_audioBuffer_to_wav_file", g_OriginalModule);
	g_ExportFunctionHooks["vx_free"] = DetourHookInfo(hCurrentModule, "vx_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_free_audioBuffer"] = DetourHookInfo(hCurrentModule, "vx_free_audioBuffer", g_OriginalModule);
	g_ExportFunctionHooks["vx_free_sdk_handle"] = DetourHookInfo(hCurrentModule, "vx_free_sdk_handle", g_OriginalModule);
	g_ExportFunctionHooks["vx_free_spurs_jobqueue_handle"] = DetourHookInfo(hCurrentModule, "vx_free_spurs_jobqueue_handle", g_OriginalModule);
	g_ExportFunctionHooks["vx_free_voiceprocessor_frame"] = DetourHookInfo(hCurrentModule, "vx_free_voiceprocessor_frame", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_audioBuffer_duration"] = DetourHookInfo(hCurrentModule, "vx_get_audioBuffer_duration", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_crash_dump_count"] = DetourHookInfo(hCurrentModule, "vx_get_crash_dump_count", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_crash_dump_generation"] = DetourHookInfo(hCurrentModule, "vx_get_crash_dump_generation", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_crash_dump_timestamp"] = DetourHookInfo(hCurrentModule, "vx_get_crash_dump_timestamp", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_current_interval_count"] = DetourHookInfo(hCurrentModule, "vx_get_current_interval_count", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_default_config"] = DetourHookInfo(hCurrentModule, "vx_get_default_config", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_default_config3"] = DetourHookInfo(hCurrentModule, "vx_get_default_config3", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_error_string"] = DetourHookInfo(hCurrentModule, "vx_get_error_string", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_event_type_string"] = DetourHookInfo(hCurrentModule, "vx_get_event_type_string", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_int_var"] = DetourHookInfo(hCurrentModule, "vx_get_int_var", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_message"] = DetourHookInfo(hCurrentModule, "vx_get_message", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_message_type"] = DetourHookInfo(hCurrentModule, "vx_get_message_type", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_report_issue_document"] = DetourHookInfo(hCurrentModule, "vx_get_report_issue_document", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_request_type_string"] = DetourHookInfo(hCurrentModule, "vx_get_request_type_string", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_response_for"] = DetourHookInfo(hCurrentModule, "vx_get_response_for", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_response_type_string"] = DetourHookInfo(hCurrentModule, "vx_get_response_type_string", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_sdk_version_info"] = DetourHookInfo(hCurrentModule, "vx_get_sdk_version_info", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_stats"] = DetourHookInfo(hCurrentModule, "vx_get_stats", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_system_stats"] = DetourHookInfo(hCurrentModule, "vx_get_system_stats", g_OriginalModule);
	g_ExportFunctionHooks["vx_get_time_ms"] = DetourHookInfo(hCurrentModule, "vx_get_time_ms", g_OriginalModule);
	g_ExportFunctionHooks["vx_group_create"] = DetourHookInfo(hCurrentModule, "vx_group_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_group_free"] = DetourHookInfo(hCurrentModule, "vx_group_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_group_list_create"] = DetourHookInfo(hCurrentModule, "vx_group_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_group_list_free"] = DetourHookInfo(hCurrentModule, "vx_group_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_initialize"] = DetourHookInfo(hCurrentModule, "vx_initialize", g_OriginalModule);
	g_ExportFunctionHooks["vx_initialize2"] = DetourHookInfo(hCurrentModule, "vx_initialize2", g_OriginalModule);
	g_ExportFunctionHooks["vx_initialize3"] = DetourHookInfo(hCurrentModule, "vx_initialize3", g_OriginalModule);
	g_ExportFunctionHooks["vx_issue_request"] = DetourHookInfo(hCurrentModule, "vx_issue_request", g_OriginalModule);
	g_ExportFunctionHooks["vx_issue_request2"] = DetourHookInfo(hCurrentModule, "vx_issue_request2", g_OriginalModule);
	g_ExportFunctionHooks["vx_issue_request3"] = DetourHookInfo(hCurrentModule, "vx_issue_request3", g_OriginalModule);
	g_ExportFunctionHooks["vx_name_value_pair_create"] = DetourHookInfo(hCurrentModule, "vx_name_value_pair_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_name_value_pair_free"] = DetourHookInfo(hCurrentModule, "vx_name_value_pair_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_name_value_pairs_create"] = DetourHookInfo(hCurrentModule, "vx_name_value_pairs_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_name_value_pairs_free"] = DetourHookInfo(hCurrentModule, "vx_name_value_pairs_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_on_application_exit"] = DetourHookInfo(hCurrentModule, "vx_on_application_exit", g_OriginalModule);
	g_ExportFunctionHooks["vx_participant_create"] = DetourHookInfo(hCurrentModule, "vx_participant_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_participant_free"] = DetourHookInfo(hCurrentModule, "vx_participant_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_participant_list_create"] = DetourHookInfo(hCurrentModule, "vx_participant_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_participant_list_free"] = DetourHookInfo(hCurrentModule, "vx_participant_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_print_env"] = DetourHookInfo(hCurrentModule, "vx_print_env", g_OriginalModule);
	g_ExportFunctionHooks["vx_queue_job_async"] = DetourHookInfo(hCurrentModule, "vx_queue_job_async", g_OriginalModule);
	g_ExportFunctionHooks["vx_queue_job_sync"] = DetourHookInfo(hCurrentModule, "vx_queue_job_sync", g_OriginalModule);
	g_ExportFunctionHooks["vx_read_crash_dump"] = DetourHookInfo(hCurrentModule, "vx_read_crash_dump", g_OriginalModule);
	g_ExportFunctionHooks["vx_reallocate"] = DetourHookInfo(hCurrentModule, "vx_reallocate", g_OriginalModule);
	g_ExportFunctionHooks["vx_register_all_requests"] = DetourHookInfo(hCurrentModule, "vx_register_all_requests", g_OriginalModule);
	g_ExportFunctionHooks["vx_register_logging_initialization"] = DetourHookInfo(hCurrentModule, "vx_register_logging_initialization", g_OriginalModule);
	g_ExportFunctionHooks["vx_register_message_notification_handler"] = DetourHookInfo(hCurrentModule, "vx_register_message_notification_handler", g_OriginalModule);
	g_ExportFunctionHooks["vx_render_audio_from_this_thread"] = DetourHookInfo(hCurrentModule, "vx_render_audio_from_this_thread", g_OriginalModule);
	g_ExportFunctionHooks["vx_replace_audio_data"] = DetourHookInfo(hCurrentModule, "vx_replace_audio_data", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_anonymous_login_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_anonymous_login_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_authtoken_login_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_authtoken_login_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_buddy_delete_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_buddy_delete_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_buddy_search_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_buddy_search_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_buddy_set_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_buddy_set_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_buddygroup_delete_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_buddygroup_delete_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_buddygroup_set_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_buddygroup_set_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_add_acl_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_add_acl_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_add_moderator_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_add_moderator_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_change_owner_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_change_owner_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_create_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_create_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_delete_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_delete_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_favorite_delete_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_favorite_delete_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_favorite_group_delete_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_favorite_group_delete_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_favorite_group_set_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_favorite_group_set_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_favorite_set_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_favorite_set_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_favorites_get_list_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_favorites_get_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_get_acl_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_get_acl_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_get_info_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_get_info_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_get_moderators_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_get_moderators_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_get_participants_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_get_participants_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_remove_acl_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_remove_acl_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_remove_moderator_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_remove_moderator_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_search_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_search_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_channel_update_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_channel_update_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_control_communications_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_control_communications_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_create_auto_accept_rule_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_create_auto_accept_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_create_block_rule_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_create_block_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_delete_auto_accept_rule_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_delete_auto_accept_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_delete_block_rule_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_delete_block_rule_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_get_account_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_get_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_get_session_fonts_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_get_session_fonts_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_get_template_fonts_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_get_template_fonts_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_list_auto_accept_rules_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_list_auto_accept_rules_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_list_block_rules_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_list_block_rules_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_list_buddies_and_groups_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_list_buddies_and_groups_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_login_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_login_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_logout_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_logout_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_post_crash_dump_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_post_crash_dump_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_send_message_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_send_message_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_send_sms_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_send_sms_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_send_subscription_reply_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_send_subscription_reply_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_send_user_app_data_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_send_user_app_data_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_set_login_properties_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_set_login_properties_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_set_presence_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_set_presence_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_update_account_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_update_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_account_web_call_create"] = DetourHookInfo(hCurrentModule, "vx_req_account_web_call_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_capture_audio_start_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_capture_audio_start_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_capture_audio_stop_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_capture_audio_stop_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_connectivity_info_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_connectivity_info_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_create_account_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_create_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_deactivate_account_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_deactivate_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_diagnostic_state_dump_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_diagnostic_state_dump_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_get_capture_devices_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_get_capture_devices_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_get_mic_level_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_get_mic_level_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_get_render_devices_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_get_render_devices_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_get_speaker_level_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_get_speaker_level_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_get_vad_properties_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_get_vad_properties_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_global_monitor_keyboard_mouse_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_global_monitor_keyboard_mouse_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_notify_application_state_change_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_notify_application_state_change_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_play_audio_buffer_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_play_audio_buffer_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_reactivate_account_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_reactivate_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_render_audio_modify_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_render_audio_modify_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_render_audio_start_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_render_audio_start_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_render_audio_stop_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_render_audio_stop_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_reset_password_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_reset_password_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_capture_device_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_capture_device_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_idle_timeout_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_idle_timeout_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_mic_level_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_mic_level_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_render_device_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_render_device_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_speaker_level_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_speaker_level_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_set_vad_properties_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_set_vad_properties_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_aux_start_buffer_capture_create"] = DetourHookInfo(hCurrentModule, "vx_req_aux_start_buffer_capture_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_ban_user_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_ban_user_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_get_banned_users_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_get_banned_users_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_kick_user_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_kick_user_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_mute_all_users_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_mute_all_users_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_mute_user_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_mute_user_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_channel_set_lock_mode_create"] = DetourHookInfo(hCurrentModule, "vx_req_channel_set_lock_mode_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_create_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_create_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_get_local_audio_info_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_get_local_audio_info_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_initiate_shutdown_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_initiate_shutdown_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_mute_local_mic_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_mute_local_mic_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_mute_local_speaker_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_mute_local_speaker_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_set_local_mic_volume_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_set_local_mic_volume_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_connector_set_local_speaker_volume_create"] = DetourHookInfo(hCurrentModule, "vx_req_connector_set_local_speaker_volume_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_channel_invite_user_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_channel_invite_user_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_create_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_create_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_media_connect_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_media_connect_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_media_disconnect_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_media_disconnect_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_mute_local_speaker_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_mute_local_speaker_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_send_dtmf_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_send_dtmf_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_send_message_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_send_message_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_send_notification_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_send_notification_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_set_3d_position_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_set_3d_position_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_set_local_speaker_volume_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_set_local_speaker_volume_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_set_participant_mute_for_me_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_set_participant_mute_for_me_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_set_participant_volume_for_me_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_set_participant_volume_for_me_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_set_voice_font_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_set_voice_font_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_terminate_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_terminate_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_text_connect_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_text_connect_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_session_text_disconnect_create"] = DetourHookInfo(hCurrentModule, "vx_req_session_text_disconnect_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_add_session_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_add_session_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_control_audio_injection_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_control_audio_injection_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_create_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_create_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_get_stats_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_get_stats_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_remove_session_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_remove_session_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_reset_focus_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_reset_focus_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_set_focus_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_set_focus_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_set_session_3d_position_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_set_session_3d_position_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_set_tx_all_sessions_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_set_tx_all_sessions_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_set_tx_no_session_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_set_tx_no_session_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_set_tx_session_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_set_tx_session_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_terminate_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_terminate_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_req_sessiongroup_unset_focus_create"] = DetourHookInfo(hCurrentModule, "vx_req_sessiongroup_unset_focus_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_request_to_xml"] = DetourHookInfo(hCurrentModule, "vx_request_to_xml", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_anonymous_login_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_anonymous_login_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_authtoken_login_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_authtoken_login_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_buddy_delete_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_buddy_delete_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_buddy_search_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_buddy_search_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_buddy_set_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_buddy_set_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_buddygroup_delete_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_buddygroup_delete_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_buddygroup_set_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_buddygroup_set_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_add_acl_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_add_acl_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_add_moderator_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_add_moderator_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_change_owner_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_change_owner_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_create_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_create_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_delete_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_delete_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_favorite_delete_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_favorite_delete_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_favorite_group_delete_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_favorite_group_delete_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_favorite_group_set_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_favorite_group_set_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_favorite_set_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_favorite_set_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_favorites_get_list_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_favorites_get_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_get_acl_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_get_acl_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_get_info_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_get_info_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_get_moderators_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_get_moderators_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_get_participants_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_get_participants_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_remove_acl_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_remove_acl_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_remove_moderator_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_remove_moderator_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_search_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_search_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_channel_update_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_channel_update_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_create_auto_accept_rule_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_create_auto_accept_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_create_block_rule_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_create_block_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_delete_auto_accept_rule_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_delete_auto_accept_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_delete_block_rule_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_delete_block_rule_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_get_account_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_get_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_get_session_fonts_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_get_session_fonts_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_get_template_fonts_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_get_template_fonts_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_list_auto_accept_rules_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_list_auto_accept_rules_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_list_block_rules_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_list_block_rules_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_list_buddies_and_groups_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_list_buddies_and_groups_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_login_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_login_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_logout_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_logout_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_post_crash_dump_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_post_crash_dump_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_send_sms_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_send_sms_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_send_subscription_reply_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_send_subscription_reply_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_send_user_app_data_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_send_user_app_data_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_set_login_properties_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_set_login_properties_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_set_presence_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_set_presence_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_account_update_account_free"] = DetourHookInfo(hCurrentModule, "vx_resp_account_update_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_capture_audio_start_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_capture_audio_start_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_capture_audio_stop_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_capture_audio_stop_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_connectivity_info_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_connectivity_info_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_create_account_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_create_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_deactivate_account_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_deactivate_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_diagnostic_state_dump_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_diagnostic_state_dump_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_get_capture_devices_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_get_capture_devices_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_get_mic_level_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_get_mic_level_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_get_render_devices_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_get_render_devices_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_get_speaker_level_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_get_speaker_level_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_get_vad_properties_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_get_vad_properties_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_global_monitor_keyboard_mouse_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_global_monitor_keyboard_mouse_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_play_audio_buffer_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_play_audio_buffer_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_reactivate_account_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_reactivate_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_render_audio_modify_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_render_audio_modify_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_render_audio_start_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_render_audio_start_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_render_audio_stop_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_render_audio_stop_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_reset_password_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_reset_password_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_capture_device_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_capture_device_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_idle_timeout_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_idle_timeout_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_mic_level_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_mic_level_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_render_device_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_render_device_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_speaker_level_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_speaker_level_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_set_vad_properties_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_set_vad_properties_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_aux_start_buffer_capture_free"] = DetourHookInfo(hCurrentModule, "vx_resp_aux_start_buffer_capture_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_ban_user_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_ban_user_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_get_banned_users_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_get_banned_users_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_kick_user_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_kick_user_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_mute_all_users_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_mute_all_users_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_mute_user_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_mute_user_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_channel_set_lock_mode_free"] = DetourHookInfo(hCurrentModule, "vx_resp_channel_set_lock_mode_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_create_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_create_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_get_local_audio_info_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_get_local_audio_info_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_initiate_shutdown_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_initiate_shutdown_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_mute_local_mic_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_mute_local_mic_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_mute_local_speaker_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_mute_local_speaker_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_set_local_mic_volume_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_set_local_mic_volume_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_connector_set_local_speaker_volume_free"] = DetourHookInfo(hCurrentModule, "vx_resp_connector_set_local_speaker_volume_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_channel_invite_user_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_channel_invite_user_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_create_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_create_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_media_connect_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_media_connect_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_media_disconnect_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_media_disconnect_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_mute_local_speaker_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_mute_local_speaker_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_send_dtmf_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_send_dtmf_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_send_message_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_send_message_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_send_notification_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_send_notification_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_set_3d_position_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_set_3d_position_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_set_local_speaker_volume_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_set_local_speaker_volume_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_set_participant_mute_for_me_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_set_participant_mute_for_me_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_set_participant_volume_for_me_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_set_participant_volume_for_me_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_set_voice_font_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_set_voice_font_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_terminate_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_terminate_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_text_connect_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_text_connect_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_session_text_disconnect_free"] = DetourHookInfo(hCurrentModule, "vx_resp_session_text_disconnect_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_add_session_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_add_session_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_create_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_create_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_get_stats_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_get_stats_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_remove_session_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_remove_session_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_reset_focus_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_reset_focus_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_set_focus_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_set_focus_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_set_session_3d_position_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_set_session_3d_position_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_set_tx_all_sessions_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_set_tx_all_sessions_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_set_tx_no_session_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_set_tx_no_session_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_set_tx_session_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_set_tx_session_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_terminate_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_terminate_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_resp_sessiongroup_unset_focus_free"] = DetourHookInfo(hCurrentModule, "vx_resp_sessiongroup_unset_focus_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_response_to_xml"] = DetourHookInfo(hCurrentModule, "vx_response_to_xml", g_OriginalModule);
	g_ExportFunctionHooks["vx_safe_invoke"] = DetourHookInfo(hCurrentModule, "vx_safe_invoke", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_advanced_agc_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_advanced_agc_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_aec_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_aec_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_agc_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_agc_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_application_crash_data"] = DetourHookInfo(hCurrentModule, "vx_set_application_crash_data", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_capture_derumbler_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_capture_derumbler_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_crash_dump_generation_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_crash_dump_generation_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_int_var"] = DetourHookInfo(hCurrentModule, "vx_set_int_var", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_out_of_process_server_address"] = DetourHookInfo(hCurrentModule, "vx_set_out_of_process_server_address", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_vad_enabled"] = DetourHookInfo(hCurrentModule, "vx_set_vad_enabled", g_OriginalModule);
	g_ExportFunctionHooks["vx_set_vp_callback"] = DetourHookInfo(hCurrentModule, "vx_set_vp_callback", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_account_create"] = DetourHookInfo(hCurrentModule, "vx_state_account_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_account_free"] = DetourHookInfo(hCurrentModule, "vx_state_account_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_account_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_account_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_account_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_account_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_contact_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_contact_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_contact_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_contact_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_contact_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_contact_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_contact_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_contact_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_group_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_group_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_group_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_group_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_group_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_group_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_group_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_group_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_buddy_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_buddy_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_connector_create"] = DetourHookInfo(hCurrentModule, "vx_state_connector_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_connector_free"] = DetourHookInfo(hCurrentModule, "vx_state_connector_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_connector_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_connector_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_connector_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_connector_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_participant_create"] = DetourHookInfo(hCurrentModule, "vx_state_participant_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_participant_free"] = DetourHookInfo(hCurrentModule, "vx_state_participant_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_participant_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_participant_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_participant_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_participant_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_session_create"] = DetourHookInfo(hCurrentModule, "vx_state_session_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_session_free"] = DetourHookInfo(hCurrentModule, "vx_state_session_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_session_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_session_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_session_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_session_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_sessiongroup_create"] = DetourHookInfo(hCurrentModule, "vx_state_sessiongroup_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_sessiongroup_free"] = DetourHookInfo(hCurrentModule, "vx_state_sessiongroup_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_sessiongroup_list_create"] = DetourHookInfo(hCurrentModule, "vx_state_sessiongroup_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_state_sessiongroup_list_free"] = DetourHookInfo(hCurrentModule, "vx_state_sessiongroup_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_stop_render_audio_from_this_thread"] = DetourHookInfo(hCurrentModule, "vx_stop_render_audio_from_this_thread", g_OriginalModule);
	g_ExportFunctionHooks["vx_strdup"] = DetourHookInfo(hCurrentModule, "vx_strdup", g_OriginalModule);
	g_ExportFunctionHooks["vx_string_list_create"] = DetourHookInfo(hCurrentModule, "vx_string_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_string_list_free"] = DetourHookInfo(hCurrentModule, "vx_string_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_unallocate"] = DetourHookInfo(hCurrentModule, "vx_unallocate", g_OriginalModule);
	g_ExportFunctionHooks["vx_unallocate_aligned"] = DetourHookInfo(hCurrentModule, "vx_unallocate_aligned", g_OriginalModule);
	g_ExportFunctionHooks["vx_uninitialize"] = DetourHookInfo(hCurrentModule, "vx_uninitialize", g_OriginalModule);
	g_ExportFunctionHooks["vx_unregister_logging_handler"] = DetourHookInfo(hCurrentModule, "vx_unregister_logging_handler", g_OriginalModule);
	g_ExportFunctionHooks["vx_unregister_message_notification_handler"] = DetourHookInfo(hCurrentModule, "vx_unregister_message_notification_handler", g_OriginalModule);
	g_ExportFunctionHooks["vx_user_channel_create"] = DetourHookInfo(hCurrentModule, "vx_user_channel_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_user_channel_free"] = DetourHookInfo(hCurrentModule, "vx_user_channel_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_user_channels_create"] = DetourHookInfo(hCurrentModule, "vx_user_channels_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_user_channels_free"] = DetourHookInfo(hCurrentModule, "vx_user_channels_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_capture_device_create"] = DetourHookInfo(hCurrentModule, "vx_virtual_capture_device_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_capture_device_create2"] = DetourHookInfo(hCurrentModule, "vx_virtual_capture_device_create2", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_capture_device_destroy"] = DetourHookInfo(hCurrentModule, "vx_virtual_capture_device_destroy", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_capture_device_get_active_media"] = DetourHookInfo(hCurrentModule, "vx_virtual_capture_device_get_active_media", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_capture_device_queue_frame"] = DetourHookInfo(hCurrentModule, "vx_virtual_capture_device_queue_frame", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_render_device_create"] = DetourHookInfo(hCurrentModule, "vx_virtual_render_device_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_render_device_dequeue_frame_2"] = DetourHookInfo(hCurrentModule, "vx_virtual_render_device_dequeue_frame_2", g_OriginalModule);
	g_ExportFunctionHooks["vx_virtual_render_device_destroy"] = DetourHookInfo(hCurrentModule, "vx_virtual_render_device_destroy", g_OriginalModule);
	g_ExportFunctionHooks["vx_voice_font_create"] = DetourHookInfo(hCurrentModule, "vx_voice_font_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_voice_font_free"] = DetourHookInfo(hCurrentModule, "vx_voice_font_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_voice_font_list_create"] = DetourHookInfo(hCurrentModule, "vx_voice_font_list_create", g_OriginalModule);
	g_ExportFunctionHooks["vx_voice_font_list_free"] = DetourHookInfo(hCurrentModule, "vx_voice_font_list_free", g_OriginalModule);
	g_ExportFunctionHooks["vx_wait_for_message"] = DetourHookInfo(hCurrentModule, "vx_wait_for_message", g_OriginalModule);
	g_ExportFunctionHooks["vx_xml_to_event"] = DetourHookInfo(hCurrentModule, "vx_xml_to_event", g_OriginalModule);
	g_ExportFunctionHooks["vx_xml_to_request"] = DetourHookInfo(hCurrentModule, "vx_xml_to_request", g_OriginalModule);
	g_ExportFunctionHooks["vx_xml_to_response"] = DetourHookInfo(hCurrentModule, "vx_xml_to_response", g_OriginalModule);
	g_ExportFunctionHooks["vxa_apcd_create"] = DetourHookInfo(hCurrentModule, "vxa_apcd_create", g_OriginalModule);
	g_ExportFunctionHooks["vxa_apcd_destroy"] = DetourHookInfo(hCurrentModule, "vxa_apcd_destroy", g_OriginalModule);
	g_ExportFunctionHooks["vxa_aprd_create"] = DetourHookInfo(hCurrentModule, "vxa_aprd_create", g_OriginalModule);
	g_ExportFunctionHooks["vxa_aprd_destroy"] = DetourHookInfo(hCurrentModule, "vxa_aprd_destroy", g_OriginalModule);
	
	for (auto it = g_ExportFunctionHooks.begin(); it != g_ExportFunctionHooks.end(); ++it)
	{
		it->second.InstallHook();
	}
}


extern void InitWhenProcessAttach(HMODULE hModule);
BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD   ul_reason_for_call,
                      LPVOID lpReserved
					  )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		HookAllExports(hModule);
		InitWhenProcessAttach(hModule);
		break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
