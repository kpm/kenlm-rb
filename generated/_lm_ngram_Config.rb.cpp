
#include <rice/Enum.hpp>
#include <rice/Data_Type.hpp>
#include <rice/Constructor.hpp>
#include <rice/Class.hpp>
#include "/home/kmeyer/dev/kenlm/lm/config.hh"


#include "_lm_ngram_Config.rb.hpp"


void wrap_lm_ngram_Config_messages_set(lm::ngram::Config* self, std::ostream* val) {
	self->messages = val;
}
std::ostream* wrap_lm_ngram_Config_messages_get(lm::ngram::Config* self) {
	return self->messages;
}
void wrap_lm_ngram_Config_enumerate_vocab_set(lm::ngram::Config* self, lm::EnumerateVocab* val) {
	self->enumerate_vocab = val;
}
lm::EnumerateVocab* wrap_lm_ngram_Config_enumerate_vocab_get(lm::ngram::Config* self) {
	return self->enumerate_vocab;
}
void wrap_lm_ngram_Config_unknown_missing_set(lm::ngram::Config* self, lm::WarningAction val) {
	self->unknown_missing = val;
}
lm::WarningAction wrap_lm_ngram_Config_unknown_missing_get(lm::ngram::Config* self) {
	return self->unknown_missing;
}
void wrap_lm_ngram_Config_sentence_marker_missing_set(lm::ngram::Config* self, lm::WarningAction val) {
	self->sentence_marker_missing = val;
}
lm::WarningAction wrap_lm_ngram_Config_sentence_marker_missing_get(lm::ngram::Config* self) {
	return self->sentence_marker_missing;
}
void wrap_lm_ngram_Config_positive_log_probability_set(lm::ngram::Config* self, lm::WarningAction val) {
	self->positive_log_probability = val;
}
lm::WarningAction wrap_lm_ngram_Config_positive_log_probability_get(lm::ngram::Config* self) {
	return self->positive_log_probability;
}
void wrap_lm_ngram_Config_unknown_missing_logprob_set(lm::ngram::Config* self, float val) {
	self->unknown_missing_logprob = val;
}
float wrap_lm_ngram_Config_unknown_missing_logprob_get(lm::ngram::Config* self) {
	return self->unknown_missing_logprob;
}
void wrap_lm_ngram_Config_probing_multiplier_set(lm::ngram::Config* self, float val) {
	self->probing_multiplier = val;
}
float wrap_lm_ngram_Config_probing_multiplier_get(lm::ngram::Config* self) {
	return self->probing_multiplier;
}
void wrap_lm_ngram_Config_building_memory_set(lm::ngram::Config* self, std::size_t val) {
	self->building_memory = val;
}
std::size_t wrap_lm_ngram_Config_building_memory_get(lm::ngram::Config* self) {
	return self->building_memory;
}
const char* wrap_lm_ngram_Config_temporary_directory_prefix_get(lm::ngram::Config* self) {
	return self->temporary_directory_prefix;
}
void wrap_lm_ngram_Config_arpa_complain_set(lm::ngram::Config* self, lm::ngram::Config::ARPALoadComplain val) {
	self->arpa_complain = val;
}
lm::ngram::Config::ARPALoadComplain wrap_lm_ngram_Config_arpa_complain_get(lm::ngram::Config* self) {
	return self->arpa_complain;
}
const char* wrap_lm_ngram_Config_write_mmap_get(lm::ngram::Config* self) {
	return self->write_mmap;
}
void wrap_lm_ngram_Config_include_vocab_set(lm::ngram::Config* self, bool val) {
	self->include_vocab = val;
}
bool wrap_lm_ngram_Config_include_vocab_get(lm::ngram::Config* self) {
	return self->include_vocab;
}
void wrap_lm_ngram_Config_prob_bits_set(lm::ngram::Config* self, ::uint8_t val) {
	self->prob_bits = val;
}
::uint8_t wrap_lm_ngram_Config_prob_bits_get(lm::ngram::Config* self) {
	return self->prob_bits;
}
void wrap_lm_ngram_Config_backoff_bits_set(lm::ngram::Config* self, ::uint8_t val) {
	self->backoff_bits = val;
}
::uint8_t wrap_lm_ngram_Config_backoff_bits_get(lm::ngram::Config* self) {
	return self->backoff_bits;
}
void wrap_lm_ngram_Config_pointer_bhiksha_bits_set(lm::ngram::Config* self, ::uint8_t val) {
	self->pointer_bhiksha_bits = val;
}
::uint8_t wrap_lm_ngram_Config_pointer_bhiksha_bits_get(lm::ngram::Config* self) {
	return self->pointer_bhiksha_bits;
}
void wrap_lm_ngram_Config_load_method_set(lm::ngram::Config* self, util::LoadMethod val) {
	self->load_method = val;
}
util::LoadMethod wrap_lm_ngram_Config_load_method_get(lm::ngram::Config* self) {
	return self->load_method;
}

void register_lm_ngram_Config(Rice::Module rb_mKenlm_Ngram) {
	Rice::Data_Type< lm::ngram::Config > rb_cConfig =  Rice::define_class_under< lm::ngram::Config >(rb_mKenlm_Ngram, "Config");
	Rice::Enum<lm::ngram::Config::ARPALoadComplain> rb_eARPALoadComplain = Rice::define_enum<lm::ngram::Config::ARPALoadComplain>("ARPALoadComplain", rb_cConfig);
	rb_eARPALoadComplain.define_value("ALL", lm::ngram::Config::ALL);
	rb_eARPALoadComplain.define_value("EXPENSIVE", lm::ngram::Config::EXPENSIVE);
	rb_eARPALoadComplain.define_value("NONE", lm::ngram::Config::NONE);
	rb_cConfig.define_constructor(Rice::Constructor< lm::ngram::Config >());
	rb_cConfig.define_method("messages=", &wrap_lm_ngram_Config_messages_set);
	rb_cConfig.define_method("messages", &wrap_lm_ngram_Config_messages_get);
	rb_cConfig.define_method("enumerate_vocab=", &wrap_lm_ngram_Config_enumerate_vocab_set);
	rb_cConfig.define_method("enumerate_vocab", &wrap_lm_ngram_Config_enumerate_vocab_get);
	rb_cConfig.define_method("unknown_missing=", &wrap_lm_ngram_Config_unknown_missing_set);
	rb_cConfig.define_method("unknown_missing", &wrap_lm_ngram_Config_unknown_missing_get);
	rb_cConfig.define_method("sentence_marker_missing=", &wrap_lm_ngram_Config_sentence_marker_missing_set);
	rb_cConfig.define_method("sentence_marker_missing", &wrap_lm_ngram_Config_sentence_marker_missing_get);
	rb_cConfig.define_method("positive_log_probability=", &wrap_lm_ngram_Config_positive_log_probability_set);
	rb_cConfig.define_method("positive_log_probability", &wrap_lm_ngram_Config_positive_log_probability_get);
	rb_cConfig.define_method("unknown_missing_logprob=", &wrap_lm_ngram_Config_unknown_missing_logprob_set);
	rb_cConfig.define_method("unknown_missing_logprob", &wrap_lm_ngram_Config_unknown_missing_logprob_get);
	rb_cConfig.define_method("probing_multiplier=", &wrap_lm_ngram_Config_probing_multiplier_set);
	rb_cConfig.define_method("probing_multiplier", &wrap_lm_ngram_Config_probing_multiplier_get);
	rb_cConfig.define_method("building_memory=", &wrap_lm_ngram_Config_building_memory_set);
	rb_cConfig.define_method("building_memory", &wrap_lm_ngram_Config_building_memory_get);
	rb_cConfig.define_method("temporary_directory_prefix", &wrap_lm_ngram_Config_temporary_directory_prefix_get);
	rb_cConfig.define_method("arpa_complain=", &wrap_lm_ngram_Config_arpa_complain_set);
	rb_cConfig.define_method("arpa_complain", &wrap_lm_ngram_Config_arpa_complain_get);
	rb_cConfig.define_method("write_mmap", &wrap_lm_ngram_Config_write_mmap_get);
	rb_cConfig.define_method("include_vocab=", &wrap_lm_ngram_Config_include_vocab_set);
	rb_cConfig.define_method("include_vocab", &wrap_lm_ngram_Config_include_vocab_get);
	rb_cConfig.define_method("prob_bits=", &wrap_lm_ngram_Config_prob_bits_set);
	rb_cConfig.define_method("prob_bits", &wrap_lm_ngram_Config_prob_bits_get);
	rb_cConfig.define_method("backoff_bits=", &wrap_lm_ngram_Config_backoff_bits_set);
	rb_cConfig.define_method("backoff_bits", &wrap_lm_ngram_Config_backoff_bits_get);
	rb_cConfig.define_method("pointer_bhiksha_bits=", &wrap_lm_ngram_Config_pointer_bhiksha_bits_set);
	rb_cConfig.define_method("pointer_bhiksha_bits", &wrap_lm_ngram_Config_pointer_bhiksha_bits_get);
	rb_cConfig.define_method("load_method=", &wrap_lm_ngram_Config_load_method_set);
	rb_cConfig.define_method("load_method", &wrap_lm_ngram_Config_load_method_get);
}
