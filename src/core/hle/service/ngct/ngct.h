// SPDX-FileCopyrightText: Copyright 2021 sudachi Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

namespace Core {
class System;
}

namespace Service::NGCT {

void LoopProcess(Core::System& system);

} // namespace Service::NGCT
