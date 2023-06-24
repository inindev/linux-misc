// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2023, John Clark <inindev@gmail.com>
 */

#include <linux/mtd/spi-nor.h>

#include "core.h"

static const struct flash_info xtx_nor_parts[] = {
	/* XTX Technology Limited */
	{ "xt25f128a", INFO(0x207018, 0, 64 * 1024, 256)
		NO_SFDP_FLAGS(SECT_4K | SPI_NOR_DUAL_READ |
			      SPI_NOR_QUAD_READ) },
	{ "xt25f128b", INFO(0x0B4018, 0, 64 * 1024, 256)
		NO_SFDP_FLAGS(SECT_4K | SPI_NOR_DUAL_READ |
			      SPI_NOR_QUAD_READ) },
};

const struct spi_nor_manufacturer spi_nor_xtx = {
	.name = "xtx",
	.parts = xtx_nor_parts,
	.nparts = ARRAY_SIZE(xtx_nor_parts),
};
