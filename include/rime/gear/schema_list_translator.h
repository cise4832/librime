//
// Copyleft RIME Developers
// License: GPLv3
//
// 2013-05-26 GONG Chen <chen.sst@gmail.com>
//
#ifndef RIME_SCHEMA_LIST_TRANSLATOR_H_
#define RIME_SCHEMA_LIST_TRANSLATOR_H_

#include <rime/translator.h>

namespace rime {

class SchemaListTranslator : public Translator {
 public:
  SchemaListTranslator(const TranslatorTicket& ticket);

  virtual shared_ptr<Translation> Query(const std::string &input,
                                        const Segment &segment,
                                        std::string* prompt);
};

}  // namespace rime

#endif  // RIME_SCHEMA_LIST_TRANSLATOR_H_
