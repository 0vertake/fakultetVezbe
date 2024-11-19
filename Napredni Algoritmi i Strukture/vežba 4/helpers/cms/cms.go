package main

func main() {
	cms := NewCMS(0.01, 0.01)

	cms.Add("hallo")
	cms.Add("hallo")
	cms.Add("hallo")
	cms.Add("hallo")
	cms.Add("hallo")

	cms.Add("hello")
	cms.Add("hello")

	cms.Add("pluh")

	println(cms.Check("hallo"))
	println(cms.Check("hello"))
	println(cms.Check("pluh"))
	println(cms.Check(("pluhovski")))
}

type CMS struct {
	m     uint
	k     uint
	hash  []HashWithSeed
	table [][]int
}

func NewCMS(epsilon float64, delta float64) *CMS {
	m := CalculateM(epsilon)
	k := CalculateK(delta)
	matrix := make([][]int, k)
	for i := range matrix {
		matrix[i] = make([]int, m)
	}

	return &CMS{
		m:     m,
		k:     k,
		hash:  CreateHashFunctions(k),
		table: matrix,
	}
}

func (cms *CMS) Add(item string) {
	data := []byte(item)
	for i := 0; i < int(cms.m); i++ {
		j := cms.hash[i].Hash(data) % uint64(cms.m)
		cms.table[i][j] += 1
	}
}

func (cms *CMS) Check(item string) int {
	data := []byte(item)
	min := int(^uint(0) >> 1)

	for i := 0; i < int(cms.k); i++ {
		j := cms.hash[i].Hash(data) % uint64(cms.m)
		if cms.table[i][j] < min {
			min = cms.table[i][j]
		}
	}
	return min
}
