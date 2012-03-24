#ifndef __RICE_GENERATED_rbpp_custom_HPP__
#define __RICE_GENERATED_rbpp_custom_HPP__

#include <rice/Object.hpp>
#include <rice/Data_Type.hpp>
#include <rice/Data_Object.hpp>
#include "lm/model.hh"
#include "/home/kmeyer/dev/kenlm/util/string_piece.hh"
#include "/home/kmeyer/dev/kenlm/util/sorted_uniform.hh"
#include "/home/kmeyer/dev/kenlm/util/sized_iterator.hh"
#include "/home/kmeyer/dev/kenlm/util/scoped.hh"
#include "/home/kmeyer/dev/kenlm/util/proxy_iterator.hh"
#include "/home/kmeyer/dev/kenlm/util/probing_hash_table.hh"
#include "/home/kmeyer/dev/kenlm/util/murmur_hash.hh"
#include "/home/kmeyer/dev/kenlm/util/mmap.hh"
#include "/home/kmeyer/dev/kenlm/util/key_value_packing.hh"
#include "/home/kmeyer/dev/kenlm/util/joint_sort.hh"
#include "/home/kmeyer/dev/kenlm/util/have.hh"
#include "/home/kmeyer/dev/kenlm/util/file_piece.hh"
#include "/home/kmeyer/dev/kenlm/util/file.hh"
#include "/home/kmeyer/dev/kenlm/util/exception.hh"
#include "/home/kmeyer/dev/kenlm/util/ersatz_progress.hh"
#include "/home/kmeyer/dev/kenlm/util/bit_packing.hh"
#include "/home/kmeyer/dev/kenlm/lm/model_type.hh"
#include "/home/kmeyer/dev/kenlm/lm/lm_exception.hh"
#include "/home/kmeyer/dev/kenlm/lm/config.hh"


template<>
Rice::Object to_ruby<lm::ngram::Config::ARPALoadComplain >(lm::ngram::Config::ARPALoadComplain const & a);
template<>
Rice::Object to_ruby<lm::ngram::ModelType >(lm::ngram::ModelType const & a);
template<>
Rice::Object to_ruby<lm::WarningAction >(lm::WarningAction const & a);


#endif // __RICE_GENERATED_rbpp_custom_HPP__
