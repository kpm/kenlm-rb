
#include <rice/Module.hpp>
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

#include "_Kenlm.rb.hpp"
extern "C"
void Init_kenlm() {
RUBY_TRY {
register_Kenlm();
} RUBY_CATCH
}
