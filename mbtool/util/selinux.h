/*
 * Copyright (C) 2014  Andrew Gunnerson <andrewgunnerson@gmail.com>
 *
 * This file is part of MultiBootPatcher
 *
 * MultiBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MultiBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <string>

#include <sepol/policydb/policydb.h>

#define MB_SELINUX_ENFORCE_FILE "/sys/fs/selinux/enforce"
#define MB_SELINUX_POLICY_FILE "/sys/fs/selinux/policy"
#define MB_SELINUX_LOAD_FILE "/sys/fs/selinux/load"

namespace MB {

bool selinux_read_policy(const std::string &path, policydb_t *pdb);
bool selinux_write_policy(const std::string &path, policydb_t *pdb);
bool selinux_make_permissive(policydb_t *pdb, const std::string &type_str);
bool selinux_add_rule(policydb_t *pdb,
                      const std::string &source_str,
                      const std::string &target_str,
                      const std::string &class_str,
                      const std::string &perm_str);
bool selinux_set_context(const std::string &path, const std::string &context);
bool selinux_lset_context(const std::string &path, const std::string &context);

}