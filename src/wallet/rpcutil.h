// Copyright (c) 2022 The lucecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

/**
 * Utility functions for RPC commands
 */
#ifndef lucecoin_WALLET_UTIL_H
#define lucecoin_WALLET_UTIL_H

#include "fs.h"
#include "util.h"

fs::path GetBackupDirFromInput(std::string strUserFilename);

#endif // lucecoin_WALLET_UTIL_H
